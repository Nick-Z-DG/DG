// TurbineDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Turbine.h"
#include "TurbineDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTurbineDlg dialog

CTurbineDlg::CTurbineDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTurbineDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTurbineDlg)
	m_dConeHeight = 10.0;
	m_dBladeCurv = 0.0;
	m_dOuterDiam = 30.0;
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTurbineDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTurbineDlg)
	DDX_Text(pDX, IDC_EDIT_CONE_HEIGHT, m_dConeHeight);
	DDV_MinMaxDouble(pDX, m_dConeHeight, 6.0, 50.0);
	DDX_Control(pDX, IDC_KERNELCADCTRL1, m_DGKern);
	DDX_Text(pDX, IDC_EDIT_BLADE_CUIRV, m_dBladeCurv);
	DDV_MinMaxDouble(pDX, m_dBladeCurv, -0.2, 0.2);
	DDX_Text(pDX, IDC_EDIT_OUTER_DIAM, m_dOuterDiam);
	DDV_MinMaxDouble(pDX, m_dOuterDiam, 7.0, 60.0);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CTurbineDlg, CDialog)
	//{{AFX_MSG_MAP(CTurbineDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_KILLFOCUS(IDC_EDIT_CONE_HEIGHT, OnKillfocusEditConeHeight)
	ON_EN_KILLFOCUS(IDC_EDIT_OUTER_DIAM, OnKillfocusEditOuterDiam)
	ON_EN_KILLFOCUS(IDC_EDIT_BLADE_CUIRV, OnKillfocusEditBladeCuirv)
	ON_BN_CLICKED(IDC_BUTTON_HELP, OnButtonHelp)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTurbineDlg message handlers

BOOL CTurbineDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	

	// Turbine object knows how to namage geometry of the object
	// This class is a GUI tier
	// Connect m_turbine to the model

	// Get model interface from the control
	//
	IModel * pIModel = (IModel*)m_DGKern.GetModel();

	m_turbine.AttachModel(pIModel);	// m_turbine will have to release pIModel when done with it

	// Display initial values of the dimensions
	//
	UpdatePage();

	return TRUE;  // return TRUE  unless you set the focus to a control
}




void CTurbineDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CTurbineDlg::OnPaint() 
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

HCURSOR CTurbineDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}


void CTurbineDlg::OnKillfocusEditConeHeight() 
{
	UpdateModel();
}


void CTurbineDlg::OnKillfocusEditOuterDiam() 
{
	UpdateModel();
}


void CTurbineDlg::OnKillfocusEditBladeCuirv() 
{
	UpdateModel();
}


void CTurbineDlg::UpdateModel()
{
	// Get numbers from edit boxes into dialog variables
	UpdateData();

	// Update cone height. m_turbine knows how to do that

	m_turbine.SetConeHeight(m_dConeHeight);

	m_turbine.m_blade.SetOuterDiam(m_dOuterDiam);

	m_turbine.m_blade.SetCurvature(m_dBladeCurv);

	m_DGKern.UpdateSurface();	// recalculate the surface after changes in geometry
}


// Get dimensions from the model and update the dialog
//
void CTurbineDlg::UpdatePage()
{
	m_dConeHeight = m_turbine.GetConeHeight();

	m_dOuterDiam = m_turbine.m_blade.GetOuterDiam();

	m_dBladeCurv = m_turbine.m_blade.GetCurvature();

	// Update edit boxes
	UpdateData(FALSE);
}


void CTurbineDlg::OnButtonHelp() 
{
	DIHelp help("VC/Turbine.aspx");
}
