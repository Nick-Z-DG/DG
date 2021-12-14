// GearDlg.cpp : implementation file
//

#include "stdafx.h"
#include "GearApp.h"
#include "GearDlg.h"

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
// CGearDlg dialog

CGearDlg::CGearDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CGearDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CGearDlg)
	m_dToothHeight = m_gear.m_dToothHeight;
	m_dWidth = m_gear.m_dWidth;
	m_dHelix = 0.0;
	m_dDiam = 2.0*m_gear.m_dR;
	m_nToothCount = 0;
	//}}AFX_DATA_INIT

	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CGearDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CGearDlg)
	DDX_Control(pDX, IDC_KERNELCADCTRL1, m_DGKern);
	DDX_Text(pDX, IDC_EDIT_TOOTH_LENGTH, m_dToothHeight);
	DDX_Text(pDX, IDC_EDIT_WIDTH, m_dWidth);
	DDX_Text(pDX, IDC_EDIT_HELIX, m_dHelix);
	DDX_Text(pDX, IDC_EDIT_DIAM, m_dDiam);
	DDX_Text(pDX, IDC_EDIT_TOOTH_COUNT, m_nToothCount);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CGearDlg, CDialog)
	//{{AFX_MSG_MAP(CGearDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_KILLFOCUS(IDC_EDIT_TOOTH_LENGTH, OnKillfocusEditToothLength)
	ON_EN_KILLFOCUS(IDC_EDIT_WIDTH, OnKillfocusEditWidth)
	ON_EN_KILLFOCUS(IDC_EDIT_HELIX, OnKillfocusEditHelix)
	ON_EN_KILLFOCUS(IDC_EDIT_DIAM, OnKillfocusEditDiam)
	ON_EN_KILLFOCUS(IDC_EDIT_TOOTH_COUNT, OnKillfocusEditToothCount)
	ON_BN_CLICKED(IDC_BUTTON_HELP, OnButtonHelp)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGearDlg message handlers

BOOL CGearDlg::OnInitDialog()
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

	IModel * pIModel = (IModel*)m_DGKern.GetModel();

	m_gear.AttachModel(pIModel);

	UpdatePage();
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CGearDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CGearDlg::OnPaint() 
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

HCURSOR CGearDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}


void CGearDlg::UpdateObject()
{
	// For a real application there should be some validation
	// that new values are consistent, for example m_dToothHeight
	// should be >= m_dR
	//
	m_gear.m_dToothHeight = m_dToothHeight;

	m_gear.m_dWidth = m_dWidth;
	
	m_gear.SetHelix(m_dHelix);

	m_gear.m_dR = 0.5*m_dDiam;

	m_gear.m_nToothCount = m_nToothCount;
}


// Transfer data from m_gear to members of this dlg
//
void CGearDlg::UpdatePage()
{
	m_dToothHeight = m_gear.m_dToothHeight;

	m_dWidth = m_gear.m_dWidth;

	m_dHelix = m_gear.GetHelix();

	m_dDiam = 2.0*m_gear.m_dR;

	m_nToothCount = m_gear.m_nToothCount;

	UpdateData(FALSE);
}

void CGearDlg::OnKillfocusEditToothLength() 
{
	UpdateModel();
}

void CGearDlg::UpdateModel()
{
	UpdateData();	// Get numbers from the screen into members of the dialog	

	UpdateObject();	// Copy to m_gear

	m_gear.UpdateModel();	// Update model using interfaces

	m_DGKern.UpdateSurface();	// recalculate the surface
}

void CGearDlg::OnKillfocusEditWidth() 
{
	UpdateModel();
}

void CGearDlg::OnKillfocusEditHelix() 
{
	UpdateModel();
}

void CGearDlg::OnKillfocusEditDiam() 
{	
	UpdateModel();
}

void CGearDlg::OnKillfocusEditToothCount() 
{
	UpdateModel();
}

void CGearDlg::OnButtonHelp() 
{
	// DIHelp declaration is included via DIKernCAD.h in StdAfx.h
	DIHelp help("Samples/Gear.aspx");
}
