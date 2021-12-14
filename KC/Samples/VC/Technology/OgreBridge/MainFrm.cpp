// MainFrm.cpp : implementation of the MainFrame class
//

#include "stdafx.h"
#include "OgreBridge.h"
#include "MainFrm.h"
#include "OgreBridgeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// MainFrame

IMPLEMENT_DYNCREATE(MainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(MainFrame, CFrameWnd)
	ON_WM_CREATE()
	ON_COMMAND(ID_HELP_OPENTOPIC, &MainFrame::OnHelp)
END_MESSAGE_MAP()


// MainFrame construction/destruction

MainFrame::MainFrame()
{
	// TODO: add member initialization code here
}

MainFrame::~MainFrame()
{
}


int MainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	if( !m_wndDlgBar.Create(this, IDD_DLGBAR, CBRS_RIGHT, IDD_DLGBAR) )
	{
		TRACE0("Failed to create DlgBar\n");
		return -1;      // fail to create
	}

	return 0;
}

BOOL MainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return TRUE;
}


// MainFrame diagnostics

#ifdef _DEBUG
void MainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void MainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}

#endif //_DEBUG

void MainFrame::OnInitView()
{
	OgreBridgeView* pView = (OgreBridgeView*)GetActiveView();
	if(pView)
		pView->m_pDlgBar = &m_wndDlgBar;
}

void MainFrame::OnHelp()
{
	// DIHelp declaration is included via DIKernCAD.h in StdAfx.h
	DIHelp help("Samples/OgreBridge.aspx");	
}
