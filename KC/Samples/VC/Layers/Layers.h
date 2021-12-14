// Layers.h : main header file for the LAYERS application
//

#if !defined(AFX_LAYERS_H__2CA4F954_F998_4BFA_923A_894DD199950A__INCLUDED_)
#define AFX_LAYERS_H__2CA4F954_F998_4BFA_923A_894DD199950A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// LayersApp:
// See Layers.cpp for the implementation of this class
//

class LayersApp : public CWinApp
{
public:
	LayersApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(LayersApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(LayersApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LAYERS_H__2CA4F954_F998_4BFA_923A_894DD199950A__INCLUDED_)
