// OgreBridge.h : main header file for the OgreBridge application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// OgreBridgeApp:
// See OgreBridge.cpp for the implementation of this class
//

class OgreBridgeApp : public CWinApp
{
public:
	OgreBridgeApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern OgreBridgeApp theApp;