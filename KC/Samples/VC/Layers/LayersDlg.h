// LayersDlg.h : header file
//
//{{AFX_INCLUDES()
#include "kernelcad.h"
//}}AFX_INCLUDES

#if !defined(AFX_LAYERSDLG_H__A555B8DB_8FA1_4E71_89CF_ED1C6AF38BE5__INCLUDED_)
#define AFX_LAYERSDLG_H__A555B8DB_8FA1_4E71_89CF_ED1C6AF38BE5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// LayersDlg dialog

class LayersDlg : public CDialog
{
// Construction
public:
	void UpdateModelInfo();
	LayersDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(LayersDlg)
	enum { IDD = IDD_LAYERS_DIALOG };
	CListBox	m_listLayers;
	CListBox	m_listObjects;
	KernelCAD	m_DGKern;
	BOOL	m_bVisible;
	CString	m_strLayer;
	int		m_nUserData;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(LayersDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(LayersDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnShow();
	afx_msg void OnHide();
	afx_msg void OnWireFrame();
	afx_msg void OnDestroy();
	afx_msg void OnSelectedObjectChanged();
	afx_msg void OnSelectedLayerChanged();
	afx_msg void OnHelpTopic();
	afx_msg void OnCheckVisible();
	afx_msg void OnFileOpen();
	afx_msg void OnFileSave();
	afx_msg void OnFileSaveAs();
	afx_msg void OnKillfocusEditLayer();
	afx_msg void OnKillfocusEditUserdata();
	afx_msg void OnExit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()


	IModel*		_iModel;
	ILayers*	_iLayers;
	ISection*	_iSection;
	IArray*		_iArrObjects;	// Flat array of all objects in the model
	IUserData*	_iUserData;

public:
	void ReleaseList();
	void ShowCurrentLayerEx(bool bShow);
	void ShowCurrentLayer(bool show);
	void UpdateSelectedLayerGroup();
	void UpdateObjectList();
	void UpdateObjectInfo();
	void UpdateLayers();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LAYERSDLG_H__A555B8DB_8FA1_4E71_89CF_ED1C6AF38BE5__INCLUDED_)
