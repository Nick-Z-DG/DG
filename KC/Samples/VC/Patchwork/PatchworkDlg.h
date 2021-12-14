// PatchworkDlg.h : header file
//

#pragma once
#include "kernelcadctrl1.h"


// PatchworkDlg dialog
class PatchworkDlg : public CDialog
{
// Construction
public:
	PatchworkDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_PATCHWORK_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	DECLARE_EVENTSINK_MAP()
	
	void OnClientDraw();

// Implementation
public:
	IGraphicItem* GetGraphicItem(IUnknown* iInterface);
	void ReleaseAll();
	void UpdatePage();
	void UpdatePatchInfo();
	void UpdateEdgesInfo();
	void UpdateCurrentEdgeInfo();
	void UpdateCurrentVertexInfo();
	void InitModelInfo();
	void UpdateObjectInfo();
	void OnNext(bool bNext);
	void GetPoint(IVertex* iVertex, DIPoint* pPt);
	void OnFileOpen();
	void OnSaveAs();
	void OnFileExit();

protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:

	CKernelcadctrl1 m_DGKern;
	int m_nElementType;
	int m_nComponents;			// Count of linked edge components in the current patch
	int m_nCurComponent;		// The current edge component in the current patch
	int m_nEdges;			// Number of edges in the current patch
	int m_nPatchVertexCount;		// Number of Vertices in th ecurrent patch
	int m_nBrowseAll;		// If 1 means browse vertices or edges of the current patch instead

	int m_nObjectCount;		// Number of top-level objects in the model
	int m_nCurObject;		// The curren tobject. One of three in the model
	bool m_bClosed;			// The current edge is a loop

	CString			m_strSectType;

	IModel*		m_iModel;	// IModel of the currently loaded model

	ISection*	m_iSection;	// ISection of the current object

	ISurfaceT*	m_iSurface;

	IFrameEx*	m_iFrameEx;	// Used to convert coordinates of surface vertices to global coordinates

	IListT* m_iList[3];	//	0 - Vertices, 1 - edges, 2 - Simplexes. 
						// Index coinsides with dimension of the item

	IIteratorT* m_iIterator[3];	// - . -
	
	POSNT m_pos[3];//	m_pos[0] - position of the current Vertex, m_pos[1] -	position of the current edge, m_pos[2] - Simplex

	INT_PTR m_nCount[3];	// Number of elements of each kind total in the surface
	
	IUnknown* m_iCurElem[3];	//Actual types 0 - IVertex, 1 - IKCLine 2 - IPatch

	IArray2* m_iArrEdgeComponents;	// Linked edge components or the current patch. Most often single component
									// Edge of surface of a cylinder has two isolated linked components which are geometricaly 3D circles

	IStrip* m_iStrip;			// The current component

	int m_nCurrentEdge;			// In m_iArrEdges

	DIPoint m_endsCurEdge[2];	// Coordinates of ends of the current edge

	IListT* m_iListVertCurEdge;	// Vertices of the current edge, including internal ones

	int m_nCurrentVertex;		// In m_iArrVertices

	DIPoint m_curVertex;		// Coordinates of the current vertex
	bool m_bCurVertexValid;		// m_curVertex calculated

	IDraw* m_iDraw;

	IGraphicItem* m_iGraphicItemPatch;

	bool m_bParametricEdges;			// Edges are supposed to be drawn using m_iGraphicItemEdge instead of strip of vertices

	IGraphicItem* m_iGraphicItemEdge;

	afx_msg void OnPrevious();
	afx_msg void OnNext();
	afx_msg void OnElemTypeChanged();
	afx_msg void OnElemTypePatch();
	afx_msg void OnElemTypeVertex();
	afx_msg void OnElemTypeComponent();
	afx_msg void OnBrowseAll();
	afx_msg void OnBrowsePatch();
	afx_msg void OnDeltaposSpinObject(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnDestroy();
	afx_msg void OnHelp();
};
