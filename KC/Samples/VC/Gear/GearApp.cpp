// GearApp.cpp : Defines the class behaviors for the application.
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
// CGearApp

BEGIN_MESSAGE_MAP(CGearApp, CWinApp)
	//{{AFX_MSG_MAP(CGearApp)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGearApp construction

CGearApp::CGearApp()
{
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CGearApp object

CGearApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CGearApp initialization

BOOL CGearApp::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization
#if(_MSC_VER < 1400 )	// Prior to Visual Studio 2005?
#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif
#endif

	CGearDlg dlg;
	m_pMainWnd = &dlg;
	int nResponse = (int)dlg.DoModal();
	if (nResponse == IDOK)
	{
	}
	else if (nResponse == IDCANCEL)
	{
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
