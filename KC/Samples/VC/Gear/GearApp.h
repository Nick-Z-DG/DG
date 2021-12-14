// GearApp.h : main header file for the GEAR application
//

#if !defined(AFX_GEARAPP_H__62ACA8F6_F068_4AD5_A27D_0FD88CF372C1__INCLUDED_)
#define AFX_GEARAPP_H__62ACA8F6_F068_4AD5_A27D_0FD88CF372C1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CGearApp:
// See Gear.cpp for the implementation of this class
//

class CGearApp : public CWinApp
{
public:
	CGearApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGearApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CGearApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GEARAPP_H__62ACA8F6_F068_4AD5_A27D_0FD88CF372C1__INCLUDED_)
