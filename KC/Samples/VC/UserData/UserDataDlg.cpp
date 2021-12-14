// UserDataDlg.cpp : implementation file
#include "stdafx.h"
#include "UserData.h"
#include "UserDataDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CUserDataDlg dialog

CUserDataDlg::CUserDataDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CUserDataDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CUserDataDlg)
	m_strDescription = _T("");
	m_dWeight = 0.0;
	m_nUserData = 0;
	m_bVisible = FALSE;
	m_bWireFrame = FALSE;
	m_nRawDataSize = 0;
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

	_pIModel = NULL;
	_iSection = NULL;
	_iTableData = NULL;
	_iArrObjects = NULL;
	_iUserData = NULL;
	_iBlob = NULL;
}

void CUserDataDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CUserDataDlg)
	DDX_Control(pDX, IDC_LIST_OBJECTS, m_listObjects);
	DDX_Control(pDX, IDC_KERNELCADCTRL1, m_DGKern);
	DDX_Text(pDX, IDC_EDIT_DESCRIPT, m_strDescription);
	DDX_Text(pDX, IDC_EDIT_WEIGHT, m_dWeight);
	DDX_Text(pDX, IDC_EDIT_USER_DATA, m_nUserData);
	DDX_Check(pDX, IDC_CHECK_VISIBLE, m_bVisible);
	DDX_Check(pDX, IDC_CHECK_WIREFRAME, m_bWireFrame);
	DDX_Text(pDX, IDC_TXT_RAWDATA_SIZE, m_nRawDataSize);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CUserDataDlg, CDialog)
	//{{AFX_MSG_MAP(CUserDataDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_LBN_SELCHANGE(IDC_LIST_OBJECTS, OnObjectSelectionChanged)
	ON_BN_CLICKED(IDC_BUTT_ENTER, OnEnter)
	ON_WM_DESTROY()
	ON_COMMAND(IDC_FILE_SAVE_AS, OnFileSaveAs)
	ON_COMMAND(IDC_FILE_OPEN, OnFileOpen)
	ON_COMMAND(IDC_FILE_SAVE, OnFileSave)
	ON_BN_CLICKED(IDC_CHECK_WIREFRAME, OnCheckWireframe)
	ON_BN_CLICKED(IDC_CHECK_VISIBLE, OnCheckVisible)
	ON_COMMAND(IDC_FILE_EXIT, OnFileExit)
	ON_COMMAND(IDC_UD_HELP, OnHelp)
	ON_COMMAND(ID_RAWDATA_LOAD, OnRawDataLoad)
	ON_COMMAND(ID_RAWDATA_SAVEAS, OnRawSaveAs)
	ON_COMMAND(ID_RAWDATA_DELETE, OnRawDataDelete)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CUserDataDlg message handlers

BOOL CUserDataDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	UpdateModelInfo();

	UpdatePage();
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}


void CUserDataDlg::UpdateModelInfo()
{
	ReleaseAll();// Because may be loading a new model

	_pIModel = (IModel*)m_DGKern.GetModel();

	// List all objects in the model ignoring parent/child relations
	IPropertyArray* iPropArray = NULL;

	VERIFY( _pIModel->QueryInterface(IID_IPropertyArray, (void**)&iPropArray) == S_OK );

	iPropArray->GetProperty("FlatObjectArray", (IUnknown**)&_iArrObjects);

	iPropArray->Release();

	// Get Data Table of the model
	IDataSource* pIDataSource = NULL;

	_pIModel->QueryInterface( IID_IDataSource, (void**)&pIDataSource );

	ASSERT(pIDataSource); if(!pIDataSource) return;

	IDataTable* pIDataTable = NULL;
	VARIANT_BOOL result = FALSE;

	VERIFY( pIDataSource->GetTable( "", &pIDataTable, &result ) == S_OK );

	if( result )
		VERIFY( pIDataTable->QueryInterface(IID_IData, (void**)&_iTableData) == S_OK );
	else
		CreateTable(pIDataSource);

	UpdateObjectList();

	UpdateObjectInfo();

	UpdateRawDataInterface(false);

	RELEASE(pIDataTable)
	RELEASE(pIDataSource)
}

void CUserDataDlg::UpdateRawDataInterface(bool bDeleteOldData)
{
	CH(_pIModel);					// Check not NULL
	IPropertyArray* iPropArray = NULL;
	_pIModel->QueryInterface( IID_IPropertyArray, (void**)&iPropArray);
	RELEASE(_iBlob)		// Release old
	if(bDeleteOldData)
		iPropArray->GetProperty("RawUserData", NULL);
	iPropArray->GetProperty("RawUserData", (IUnknown**)&_iBlob);			
	
	CH(_iBlob);	// Check not NULL. When the model does not have any raw data above creates empty blob and keeps in the model
	// If the blob is empty on saving the model it is not embedded

	iPropArray->Release();
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CUserDataDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

HCURSOR CUserDataDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}


void CUserDataDlg::CreateTable(IDataSource *iDataSource)
{
	// Does not exist
	iDataSource->CreateTable("");

	IDataTable* pIDataTable = NULL;
	VARIANT_BOOL result = FALSE;

	VERIFY( iDataSource->GetTable( "", &pIDataTable, &result) == S_OK );

	VERIFY( pIDataTable->QueryInterface(IID_IData, (void**)&_iTableData) == S_OK );

	ASSERT(_iTableData);

	pIDataTable->InsertField(0,  eDataTypeLong);

	pIDataTable->InsertField(1,  eDataTypeString);

	pIDataTable->InsertField(2,  eDataTypeDouble);

	CreateRecords(pIDataTable);

	RELEASE(pIDataTable);
}


void CUserDataDlg::CreateRecords(IDataTable* iTable)
{
	IRecordSet* iRecSet = NULL;

	VERIFY( iTable->QueryInterface( IID_IRecordSet, (void**)&iRecSet) == S_OK );

	int count = 0;
	
	_iArrObjects->GetCount(&count);

	// Create empty records one per object
	for( int i=0; i<count; i++)
		iRecSet->InsertRecordAt(0);

	IDataMods* iMods = NULL;
	ASSERT(_iTableData);

	VERIFY( _iTableData->QueryInterface( IID_IDataMods, (void**)&iMods) == S_OK );

	for( int i=0; i<count; i++)
	{
		// Set both user data in the object
		// and field 0 in the record to i to link to each other
		ISection* iSect = NULL;
		
		_iArrObjects->GetAt(i, (IUnknown**)&iSect);

		IUserData* iUserData = NULL;
		
		VERIFY( iSect->QueryInterface( IID_IUserData, (void**)&iUserData) == S_OK );

		iUserData->SetData(i);

		RELEASE(iUserData)

		iMods->SetLongAt(i, 0, i); //i-th record, 0-th field value set to i 

		RELEASE(iSect)
	}

	RELEASE(iMods)
	RELEASE(iRecSet)
}


void CUserDataDlg::UpdateObjectList()
{
	 m_listObjects.ResetContent();

	int nObjectCount = 0;
	
	_iArrObjects->GetCount(&nObjectCount);

	char szSectName[41];

	for(int i=0; i<nObjectCount; i++)
	{
		ISection* iSect = NULL;
		
		_iArrObjects->GetAt(i, (IUnknown**)&iSect);

		VERIFY( iSect->GetName(szSectName) == S_OK);

		if( szSectName[0] == 0 )
			strcpy_s(szSectName, 41, "Unnamed object");

		m_listObjects.AddString( szSectName );

		RELEASE(iSect)
	}

	if( m_listObjects.GetCount() > 0 )
		m_listObjects.SetCurSel(0);
}


void CUserDataDlg::UpdateObjectInfo()
{
	_selectedObject = m_listObjects.GetCurSel();

	if( _selectedObject < 0 )
		return;

	RELEASE(_iSection)
		
	_iArrObjects->GetAt(_selectedObject, (IUnknown**)&_iSection);	ASSERT(_iSection);

	VARIANT_BOOL bVisible;

	_iSection->GetVisibleFlag(&bVisible);

	m_bVisible = ( bVisible ? TRUE : FALSE );

	RELEASE(_iUserData);
	
	_iSection->QueryInterface(IID_IUserData, (void**)&_iUserData);

	ASSERT(_iUserData);

	_iUserData->GetData( &m_nUserData );

	DisplayDataBaseObjectInfo();
}


// Look up a record by its first fields
// and display the record on the form
//
void CUserDataDlg::DisplayDataBaseObjectInfo()
{
	int nRecord = FindCurObject();

	if( nRecord == -1 )
		return;	// Not found

	BSTR bstr = ::SysAllocString(L"");

	_iTableData->GetStringAt(nRecord, 1, &bstr);

	m_strDescription = bstr;

	_iTableData->GetDoubleAt(nRecord, 2, &m_dWeight);

	UpdateData(FALSE);
}

// Find record in the data table for the currently selected object
//
int CUserDataDlg::FindCurObject()
{
	int n = 0;
	
	_iTableData->GetRecordCount(&n);

	long curKey = -1;
	int nRecord = -1;

	for( int i=0; i<n; i++)
	{
		_iTableData->GetLongAt(i, 0, &curKey);

		if( curKey == _selectedObject )
		{
			nRecord = i;
			return i;
		}
	}

	return -1;
}

void CUserDataDlg::OnObjectSelectionChanged() 
{
	UpdateObjectInfo();
}

void CUserDataDlg::OnEnter() 
{
	UpdateData();

	int nRecord = FindCurObject();

	if( nRecord == -1 )
		return;	// Not found

	IDataMods* iMods = NULL;
	
	_iTableData->QueryInterface(IID_IDataMods, (void**)&iMods);

	iMods->SetStringAt(nRecord, 1, m_strDescription.GetBuffer( m_strDescription.GetLength() ) );

	iMods->SetDoubleAt(nRecord, 2, m_dWeight);

	RELEASE(iMods)
}

void CUserDataDlg::OnDestroy() 
{
	CDialog::OnDestroy();
	
	ReleaseAll();
}

void CUserDataDlg::OnFileSaveAs() 
{
	if(!_pIModel)
		return;

	CString strModelPath = m_DGKern.GetModelPath();

	CFileDialog dlg( FALSE, "mdg", strModelPath, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, 
			"Model Files (*.mdg)|*.mdg|KernelCAD Models (*.glm)|*.glm||");

	if(dlg.DoModal() != IDOK)
		return;

	strModelPath = dlg.GetPathName();

	m_DGKern.SaveAs(strModelPath);
}

void CUserDataDlg::OnFileOpen() 
{
	CString strModelPath = m_DGKern.GetModelPath();

	CFileDialog dlg( TRUE, "mdg", strModelPath, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, 
			"Model Files (*.mdg)|*.mdg|KernelCAD Models (*.glm)|*.glm||");

	if(dlg.DoModal() != IDOK)
		return;

	strModelPath = dlg.GetPathName();	

	m_DGKern.SetModelPath(strModelPath);

	UpdateModelInfo();

	UpdatePage();

	Invalidate(FALSE);
	UpdateWindow();

}

void CUserDataDlg::ReleaseAll()
{
	// Release and set to NULL. Defined in Samples\VC\Include\DITypes.h
	// Order does not really matter
	RELEASE(_iUserData)
	RELEASE(_iArrObjects)
	RELEASE(_iTableData)
	RELEASE(_iSection)
	RELEASE(_pIModel)
	RELEASE(_iBlob)
}


void CUserDataDlg::OnFileSave() 
{
	if(!_pIModel)
		return;

	m_DGKern.Save();
}


void CUserDataDlg::OnCheckWireframe() 
{
	UpdateData();

	m_DGKern.SetRenderSolid( m_bWireFrame ? FALSE : TRUE );
}


void CUserDataDlg::OnCheckVisible() 
{
	UpdateData();

	_iSection->SetVisible(m_bVisible);

	m_DGKern.Invalidate(FALSE);
	m_DGKern.UpdateWindow();
}

void CUserDataDlg::OnFileExit() 
{
	OnOK();	
}

void CUserDataDlg::OnHelp() 
{
	DIHelp help("Samples/UserData.aspx");	
}

void CUserDataDlg::OnRawDataLoad()
{
	CH(_iBlob);					// Check not NULL. 

	CFileDialog dlg( TRUE, "mdg", "C:\\Program Files\\DInsight\\KernelCAD_2_4\\Samples\\VC\\UserData\\SampleData.txt", OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, 
			"Text files (*.txt)|*.txt||");

	if(dlg.DoModal() != IDOK)
		return;

	CString strPath = dlg.GetPathName();
	char* szPath = strPath.GetBuffer();
	_iBlob->Load(szPath);

	UpdatePage();
}

void CUserDataDlg::OnRawSaveAs()
{
	CH(_iBlob);					// Check not NULL. 
	if( m_nRawDataSize == 0 )
	{
		AfxMessageBox("The model has no unformated user data");
		return;
	}

	CFileDialog dlg( FALSE, "mdg", "C:\\Program Files\\DInsight\\KernelCAD_2_4\\Samples\\VC\\UserData\\SampleData.txt", OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, 
			"Text files (*.txt)|*.txt||");

	if(dlg.DoModal() != IDOK)
		return;

	CString strPath = dlg.GetPathName();
	char* szPath = strPath.GetBuffer();
	_iBlob->Save(szPath);

	UpdatePage();
}

void CUserDataDlg::OnRawDataDelete()
{
	UpdateRawDataInterface(true);
	UpdatePage();
}

void CUserDataDlg::UpdatePage()
{
	if( _iBlob )
		_iBlob->GetSize(&m_nRawDataSize);
	else
		ASSERT(m_nRawDataSize == 0 );
	UpdateData(FALSE);	// Show new data size
}
