// UserDataDlg.h : header file
//
//{{AFX_INCLUDES()
#include "kernelcad.h"
//}}AFX_INCLUDES

#if !defined(AFX_USERDATADLG_H__38DBE194_D3F1_4403_859D_471E5523524D__INCLUDED_)
#define AFX_USERDATADLG_H__38DBE194_D3F1_4403_859D_471E5523524D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CUserDataDlg dialog

class CUserDataDlg : public CDialog
{
// Construction
public:
	void UpdateRawDataInterface(bool bDeleteOldData);
	void ReleaseAll();
	void DisplayDataBaseObjectInfo();
	int FindCurObject();
	void UpdateObjectInfo();
	void UpdateObjectList();
	void CreateRecords(IDataTable* iTable);
	void CreateTable(IDataSource* iDataSource);
	void UpdateModelInfo();
	CUserDataDlg(CWnd* pParent = NULL);	// standard constructor
	void UpdatePage();

// Dialog Data
	//{{AFX_DATA(CUserDataDlg)
	enum { IDD = IDD_USERDATA_DIALOG };
	CListBox	m_listObjects;
	KernelCAD	m_DGKern;
	CString	m_strDescription;
	double	m_dWeight;
	int		m_nUserData;
	BOOL	m_bVisible;
	BOOL	m_bWireFrame;
	int		m_nRawDataSize;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CUserDataDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	IModel*		_pIModel;
	ISection*	_iSection;
	IData*		_iTableData;
	IArray*		_iArrObjects;	// Flat array of all objects in the model
	IUserData*	_iUserData;		// To access the integer stored in the current object
				// In this application the integer will serve as a key to look up information relevant
				// to the object in Data Table of the model.
	IBlob*		_iBlob;		// Raw data stored in the model or NULL
	int 		_selectedObject;	// selected Index in the object list


	// Generated message map functions
	//{{AFX_MSG(CUserDataDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnObjectSelectionChanged();
	afx_msg void OnEnter();
	afx_msg void OnDestroy();
	afx_msg void OnFileSaveAs();
	afx_msg void OnFileOpen();
	afx_msg void OnFileSave();
	afx_msg void OnCheckWireframe();
	afx_msg void OnCheckVisible();
	afx_msg void OnFileExit();
	afx_msg void OnHelp();
	afx_msg void OnRawDataLoad();
	afx_msg void OnRawSaveAs();
	afx_msg void OnRawDataDelete();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_USERDATADLG_H__38DBE194_D3F1_4403_859D_471E5523524D__INCLUDED_)
