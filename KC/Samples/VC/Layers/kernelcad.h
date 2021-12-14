#if !defined(AFX_KERNELCAD_H__428531C8_85C0_429C_AD4E_752D27842C95__INCLUDED_)
#define AFX_KERNELCAD_H__428531C8_85C0_429C_AD4E_752D27842C95__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// KernelCAD wrapper class

class KernelCAD : public CWnd
{
protected:
	DECLARE_DYNCREATE(KernelCAD)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x1bf74baf, 0xdab3, 0x4a68, { 0xa6, 0xec, 0x40, 0x9e, 0x7a, 0xaa, 0x24, 0xbb } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:
	CString GetModelPath();
	void SetModelPath(LPCTSTR);
	BOOL GetShowGlobalAxes();
	void SetShowGlobalAxes(BOOL);
	BOOL GetShowLocalAxes();
	void SetShowLocalAxes(BOOL);
	long GetDIBackColor();
	void SetDIBackColor(long);
	BOOL GetRenderSolid();
	void SetRenderSolid(BOOL);

// Operations
public:
	BOOL SaveAs(LPCTSTR strFilePath);
	BOOL Save();
	LPUNKNOWN GetModel();
	IModel_DGPtr GetModelDG()
	{
		LPUNKNOWN iUnkn = GetModel();
		IModel_DGPtr iModel(iUnkn);
		iUnkn->Release();
		return iModel;
	}
	BOOL UpdateSurface();
	LPUNKNOWN GetView();
	void RequestClientDraw(BOOL request);
	void RequestEvent(long event, BOOL request);
	void UpdateView();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_KERNELCAD_H__428531C8_85C0_429C_AD4E_752D27842C95__INCLUDED_)