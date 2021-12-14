// OcctBridgeView.h : interface of the OcctBridgeView class
#pragma once
#include "kernelcad.h"

class DlgBar;
class OcctBridgeDoc;

class OcctBridgeView : public CView
{
protected: // create from serialization only
	OcctBridgeView();
	DECLARE_DYNCREATE(OcctBridgeView)

// Attributes
public:
	OcctBridgeDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	void OnCallBack(const char* operation, __int64 param0, __int64 param1);
	IGlobalAPI_KC* GetKcApi();
	void DoTest();
	void ExtraTests(ITechnology_DG* iTechnology);
	void UpdateView();
	void Init();
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnInitialUpdate();
protected:

	__int64 m_param0LastCallBack;
	__int64 m_param1LastCallBack;

// Implementation
public:
	virtual ~OcctBridgeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	CKernelCAD m_DGKern;

public:

public:
	DlgBar* m_pDlgBar;

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

	DECLARE_EVENTSINK_MAP()

public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // debug version in OcctBridgeView.cpp
inline OcctBridgeDoc* OcctBridgeView::GetDocument() const
   { return reinterpret_cast<OcctBridgeDoc*>(m_pDocument); }
#endif

