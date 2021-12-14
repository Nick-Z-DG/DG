// Layers.cpp : Defines the class behaviors for the application.
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
// LayersApp

BEGIN_MESSAGE_MAP(LayersApp, CWinApp)
	//{{AFX_MSG_MAP(LayersApp)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// LayersApp construction

LayersApp::LayersApp()
{
}

/////////////////////////////////////////////////////////////////////////////
// The one and only LayersApp object

LayersApp theApp;

/////////////////////////////////////////////////////////////////////////////
// LayersApp initialization

BOOL LayersApp::InitInstance()
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

	LayersDlg dlg;
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
