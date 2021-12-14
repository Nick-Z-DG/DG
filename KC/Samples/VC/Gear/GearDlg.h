// GearDlg.h : header file
//
//{{AFX_INCLUDES()
#include "kernelcad.h"
//}}AFX_INCLUDES

#if !defined(AFX_GEARDLG_H__8B0E1BCF_C803_4B87_B5A9_001AC75AA6F4__INCLUDED_)
#define AFX_GEARDLG_H__8B0E1BCF_C803_4B87_B5A9_001AC75AA6F4__INCLUDED_

#include "Gear.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CGearDlg dialog

class CGearDlg : public CDialog
{
// Construction
public:
	void UpdatePage();
	void UpdateModel();
	void UpdateObject();
	CGearDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CGearDlg)
	enum { IDD = IDD_GEAR_DIALOG };
	CKernelCAD	m_DGKern;
	double	m_dToothHeight;
	double	m_dWidth;
	double	m_dHelix;
	double	m_dDiam;
	int		m_nToothCount;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGearDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	Gear m_gear;
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CGearDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnKillfocusEditToothLength();
	afx_msg void OnKillfocusEditWidth();
	afx_msg void OnKillfocusEditHelix();
	afx_msg void OnKillfocusEditDiam();
	afx_msg void OnKillfocusEditToothCount();
	afx_msg void OnButtonHelp();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GEARDLG_H__8B0E1BCF_C803_4B87_B5A9_001AC75AA6F4__INCLUDED_)
