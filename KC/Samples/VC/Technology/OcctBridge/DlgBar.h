#if !defined(AFX_ZDLGBAR_H__FC3EA1E9_B530_11D4_83D3_00E02910963F__INCLUDED_)
#define AFX_ZDLGBAR_H__FC3EA1E9_B530_11D4_83D3_00E02910963F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//
class MainFrame;
class OcctBridgeView;
/////////////////////////////////////////////////////////////////////////////
// DlgBar dialog

class DlgBar : public CDialogBar
{
// Construction
public:
	void DisplayInteger(UINT idControl, int numb);
	double ReadNumber(UINT idControl);
	void Init();
	void DisplayNumber(UINT idControl, double numb);
	MainFrame* GetMainFrame();
	void GetViewRef();
	void UpdatePage();

	CWnd * m_pParent;	// Main frame

	OcctBridgeView* m_pView;

	DlgBar(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DlgBar)
	enum { IDD = IDD_DLGBAR };
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DlgBar)
	public:
	virtual BOOL Create( CWnd* pParentWnd, UINT nIDTemplate, UINT nStyle, UINT nID );
	protected:
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DlgBar)
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnTest();
	afx_msg void OnTestView();
	afx_msg void OnTestCOM();

	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	void OnUpdateCmdUI(CFrameWnd* pTarget, BOOL bDisableIfNoHndler);

public:
	BOOL m_bUseView;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZDLGBAR_H__FC3EA1E9_B530_11D4_83D3_00E02910963F__INCLUDED_)
