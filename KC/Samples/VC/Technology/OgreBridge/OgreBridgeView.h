// OgreBridgeView.h : interface of the OgreBridgeView class
#pragma once
#include "kernelcad.h"

class DlgBar;
class OgreBridgeDoc;

class OgreBridgeView : public CView
{
protected: // create from serialization only
	OgreBridgeView();
	DECLARE_DYNCREATE(OgreBridgeView)

// Attributes
public:
	OgreBridgeDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	void OnCallBack(const char* operation, __int64 param0, __int64 param1);
	IGlobalAPI_KC* GetKcApi();
	void DoTest();
	void UpdateView();
	void Init();
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnInitialUpdate();
protected:

// Implementation
public:
	virtual ~OgreBridgeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	CKernelCAD m_DGKern;

public:

public:
	DlgBar* m_pDlgBar;

	Ogre::Root* m_pRoot;

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

	DECLARE_EVENTSINK_MAP()

public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // debug version in OgreBridgeView.cpp
inline OgreBridgeDoc* OgreBridgeView::GetDocument() const
   { return reinterpret_cast<OgreBridgeDoc*>(m_pDocument); }
#endif

