// UserData.h : main header file for the USERDATA application
//

#if !defined(AFX_USERDATA_H__1639D98A_A9DE_402A_9676_4B90C055CC04__INCLUDED_)
#define AFX_USERDATA_H__1639D98A_A9DE_402A_9676_4B90C055CC04__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CUserDataApp:
// See UserData.cpp for the implementation of this class
//

class CUserDataApp : public CWinApp
{
public:
	CUserDataApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CUserDataApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CUserDataApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_USERDATA_H__1639D98A_A9DE_402A_9676_4B90C055CC04__INCLUDED_)
