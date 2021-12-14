// TurbineDlg.h : header file
//
//{{AFX_INCLUDES()
#include "kernelcad.h"
//}}AFX_INCLUDES

#if !defined(AFX_TURBINEDLG_H__C08B2611_E6EF_458A_8AF5_D43334651AA7__INCLUDED_)
#define AFX_TURBINEDLG_H__C08B2611_E6EF_458A_8AF5_D43334651AA7__INCLUDED_

#include "TurbineModel.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTurbineDlg dialog

class CTurbineDlg : public CDialog
{
// Construction
public:
	void UpdatePage();
	Turbine m_turbine;
	void UpdateModel();
	CTurbineDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTurbineDlg)
	enum { IDD = IDD_TURBINE_DIALOG };
	double	m_dConeHeight;
	CKernelCAD	m_DGKern;
	double	m_dBladeCurv;
	double	m_dOuterDiam;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTurbineDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTurbineDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnKillfocusEditConeHeight();
	afx_msg void OnKillfocusEditOuterDiam();
	afx_msg void OnKillfocusEditBladeCuirv();
	afx_msg void OnButtonHelp();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TURBINEDLG_H__C08B2611_E6EF_458A_8AF5_D43334651AA7__INCLUDED_)
