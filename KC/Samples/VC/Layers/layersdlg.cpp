// LayersDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Layers.h"
#include "LayersDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// LayersDlg dialog

LayersDlg::LayersDlg(CWnd* pParent /*=NULL*/)
	: CDialog(LayersDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(LayersDlg)
	m_bVisible = TRUE;
	m_strLayer = _T("");
	m_nUserData = 0;
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

	_iModel = NULL;
	_iLayers = NULL;
	_iSection = NULL;
	_iArrObjects = NULL;
	_iUserData = NULL;
}

void LayersDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(LayersDlg)
	DDX_Control(pDX, IDC_LIST_LAYERS, m_listLayers);
	DDX_Control(pDX, IDC_LIST_OBJECTS, m_listObjects);
	DDX_Control(pDX, IDC_KERNELCADCTRL1, m_DGKern);
	DDX_Check(pDX, IDC_CHECK_VISIBLE, m_bVisible);
	DDX_Text(pDX, IDC_EDIT_LAYER, m_strLayer);
	DDX_Text(pDX, IDC_EDIT_USERDATA, m_nUserData);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(LayersDlg, CDialog)
	//{{AFX_MSG_MAP(LayersDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTT_SHOW, OnShow)
	ON_BN_CLICKED(IDC_BUTT_HIDE, OnHide)
	ON_BN_CLICKED(IDC_C_WIREFRAME, OnWireFrame)
	ON_WM_DESTROY()
	ON_LBN_SELCHANGE(IDC_LIST_OBJECTS, OnSelectedObjectChanged)
	ON_LBN_SELCHANGE(IDC_LIST_LAYERS, OnSelectedLayerChanged)
	ON_COMMAND(IDC_HELP_TOPIC, OnHelpTopic)
	ON_BN_CLICKED(IDC_CHECK_VISIBLE, OnCheckVisible)
	ON_COMMAND(ID_LR_FILE_OPEN, OnFileOpen)
	ON_COMMAND(ID_LRFILE_SAVE, OnFileSave)
	ON_COMMAND(IDC_LRFILE_SAVEAS, OnFileSaveAs)
	ON_EN_KILLFOCUS(IDC_EDIT_LAYER, OnKillfocusEditLayer)
	ON_EN_KILLFOCUS(IDC_EDIT_USERDATA, OnKillfocusEditUserdata)
	ON_COMMAND(IDC_FILE_EXIT, OnExit)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// LayersDlg message handlers

BOOL LayersDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	UpdateModelInfo();
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void LayersDlg::UpdateModelInfo()
{
	RELEASE(_iModel);
	_iModel = (IModel*)m_DGKern.GetModel();

	// List all objects in the model ignoring parent/child relations
	IPropertyArray* iPropArray = NULL;
	_iModel->QueryInterface( IID_IPropertyArray, (void**)&iPropArray);

	RELEASE(_iArrObjects);
	iPropArray->GetProperty("FlatObjectArray", (IUnknown**)&_iArrObjects);

	RELEASE(_iLayers);

	_iModel->QueryInterface( IID_ILayers, (void**)&_iLayers);

	UpdateObjectList();

	UpdateLayers();

	UpdateObjectInfo();

	iPropArray->Release();
}

void LayersDlg::ReleaseList()
{
	int n = m_listObjects.GetCount();
	ISection* iSect;

	for(int i=0; i<n; i++)
	{
		iSect = NULL;
		iSect = (ISection*) m_listObjects.GetItemData(i);
		if(iSect)
			iSect->Release();
	}
}

void LayersDlg::UpdateObjectList()
{
	ReleaseList();

	m_listObjects.ResetContent();

	int nObjectCount = 0;

	_iArrObjects->GetCount(&nObjectCount);

	ISection* iSect = NULL;
	TCHAR lpszName[200];

	for(int i=0; i<nObjectCount; i++)
	{
		_iArrObjects->GetAt(i, (IUnknown**)&iSect);

		iSect->GetName(lpszName);

		if( strlen(lpszName) == 0 )
			strcpy(lpszName, "Unnamed object");

        int item = m_listObjects.AddString(lpszName);

		m_listObjects.SetItemData( item, (DWORD)iSect);// Map item to the object
	}

	if( m_listObjects.GetCount() > 0 )
        m_listObjects.SetCurSel(0);
}

void LayersDlg::UpdateObjectInfo()
{
	int objectSelected = m_listObjects.GetCurSel();

	if( objectSelected == LB_ERR )
		return;
	RELEASE(_iSection);
    _iSection = (ISection*) m_listObjects.GetItemData(objectSelected);		ASSERT(_iSection);	if(!_iSection ) return;
	_iSection->AddRef();	// All list items keep reference to its section. They all released in one step in ReleaseList()
							// Storing the interface in _iSection means another reference added

	VARIANT_BOOL visible;
	_iSection->GetVisibleFlag(&visible);
	m_bVisible = visible!=0;

	RELEASE( _iUserData );
	
	_iSection->QueryInterface( IID_IUserData, (void**)&_iUserData);

	BSTR layerName = ::SysAllocString(L"");

	_iUserData->GetLayerName( &layerName );

	m_strLayer = layerName;

	if( m_strLayer.IsEmpty() )
		m_strLayer = "Default layer";

	_iUserData->GetData(&m_nUserData);

	UpdateData(FALSE);;
}

void LayersDlg::UpdateLayers()
{
	m_listLayers.ResetContent();

	IData* layers = NULL;
	
	_iLayers->EnumLayers(&layers);

	// layers is a data table with a records consisting of a single 
	// string field - name of the layer
	int count = 0;
	layers->GetRecordCount(&count);

	BSTR layerName = ::SysAllocString(L"");

	for(int i=0; i<count; i++)
	{
		layers->GetStringAt(i, 0, &layerName);

		CString strLayer = layerName;

		if( strLayer.IsEmpty() )
			strLayer = "Default layer";

		m_listLayers.AddString( strLayer );
	}

	if( m_listLayers.GetCount() > 0 )
        m_listLayers.SetCurSel(0);

	UpdateSelectedLayerGroup();

	layers->Release();
}

void LayersDlg::UpdateSelectedLayerGroup()
{
	bool bEnableLayerGroup = m_listLayers.GetCount() > 0;

	GetDlgItem(IDC_GROUP_SEL_LAYER)->EnableWindow(bEnableLayerGroup);
	GetDlgItem(IDC_BUTT_HIDE)->EnableWindow(bEnableLayerGroup);
	GetDlgItem(IDC_BUTT_SHOW)->EnableWindow(bEnableLayerGroup);

	if( !bEnableLayerGroup )
		return;

	int nCurSel = m_listLayers.GetCurSel();

	if( nCurSel == LB_ERR )
		return;	// No selection

	CString layer;

	m_listLayers.GetText( nCurSel, layer);

	if( layer == "Default layer" )// What used in this application to identify the default
		layer = ""; // Empty string is the official default layers name

	VARIANT_BOOL  all = 0;
	int  nVisible = 0;
	_iLayers->Get(layer.GetBuffer(20), &all, &nVisible);

	// Disable show button if everything is already visible
	GetDlgItem(IDC_BUTT_HIDE)->EnableWindow( nVisible || !all );
	GetDlgItem(IDC_BUTT_SHOW)->EnableWindow( !nVisible || !all );
}


// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void LayersDlg::OnPaint() 
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

HCURSOR LayersDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void LayersDlg::OnShow() 
{
	ShowCurrentLayerEx(true);
}

void LayersDlg::OnHide() 
{
	ShowCurrentLayerEx(false);
}

void LayersDlg::ShowCurrentLayerEx(bool bShow) 
{
	ShowCurrentLayer(bShow);
	UpdateSelectedLayerGroup();
	//The current object might have been out of synch with the rest
	// of the layer. Update the check box
	VARIANT_BOOL visible;
	_iSection->GetVisibleFlag(&visible);
	m_bVisible = visible!=0;

	UpdateData(FALSE);
}

void LayersDlg::ShowCurrentLayer(bool show)
{
	int nCurSel = m_listLayers.GetCurSel();

	if( nCurSel == LB_ERR )
		return;	// No selection

	CString layer;

	m_listLayers.GetText( nCurSel, layer);

	if( layer == "Default layer" )// What used in this application to identify the default
		layer = ""; // Empty string is the official default layers name

	LPSTR szLayer = layer.GetBuffer( layer.GetLength() );

	_iLayers->Set( szLayer, (show ? 1 : 0) );

	m_DGKern.UpdateView();
}

void LayersDlg::OnWireFrame() 
{
	CButton* pButtn = (CButton*)GetDlgItem(IDC_C_WIREFRAME);	
	int nCheck = pButtn->GetCheck();

	m_DGKern.SetRenderSolid( !nCheck );
}

void LayersDlg::OnDestroy() 
{
	ReleaseList();
	m_listObjects.ResetContent( );

	RELEASE(_iModel);
	RELEASE(_iLayers);
	RELEASE(_iSection);
	RELEASE(_iArrObjects);
	RELEASE(_iUserData);

	CDialog::OnDestroy();
}

void LayersDlg::OnSelectedObjectChanged() 
{
	UpdateObjectInfo();
}

void LayersDlg::OnSelectedLayerChanged() 
{
	UpdateSelectedLayerGroup();	
}


void LayersDlg::OnHelpTopic() 
{
	DIHelp help("VC/Layers.aspx");
}

void LayersDlg::OnCheckVisible() 
{
	UpdateData();
	
	ASSERT(_iSection); if(!_iSection) return;

	_iSection->SetVisible( m_bVisible );

	// The layer has become partially visible/invisible
	// Update Show/Hide layer buttons
	UpdateSelectedLayerGroup();

	m_DGKern.UpdateView();	
}

void LayersDlg::OnFileOpen() 
{
	CString strModelPath = m_DGKern.GetModelPath();

	CFileDialog dlg( TRUE, "mdg", strModelPath, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, 
			"Model Files (*.mdg)|*.mdg|KernelCAD Models (*.glm)|*.glm||");

	if(dlg.DoModal() != IDOK)
		return;

	strModelPath = dlg.GetPathName();	

	m_DGKern.SetModelPath(strModelPath);

	UpdateModelInfo();

	Invalidate(FALSE);
	UpdateWindow();
}

void LayersDlg::OnFileSave() 
{
	if( _iModel == NULL )
		return;

	m_DGKern.Save();
}

void LayersDlg::OnFileSaveAs() 
{
	if(!_iModel)
		return;

	CString strModelPath = m_DGKern.GetModelPath();

	CFileDialog dlg( FALSE, "mdg", strModelPath, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, 
			"Model Files (*.mdg)|*.mdg|KernelCAD Models (*.glm)|*.glm||");

	if(dlg.DoModal() != IDOK)
		return;

	strModelPath = dlg.GetPathName();

	m_DGKern.SaveAs(strModelPath);
}

void LayersDlg::OnExit()
{
	OnOK();
}

void LayersDlg::OnKillfocusEditLayer() 
{
	UpdateData();

	_iUserData->SetLayerName(m_strLayer.GetBuffer(40));

	UpdateLayers();
}

void LayersDlg::OnKillfocusEditUserdata() 
{
	UpdateData();

	_iUserData->SetData( m_nUserData );	
}
