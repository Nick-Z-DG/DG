// DBuggerDlg.h : header file
//
#include "Plane.h"

#pragma once

// DBuggerDlg dialog
class DBuggerDlg : public CDialog
{
// Construction
public:
	DBuggerDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_MY3DBUGGER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	void DumpModel();
	void DumpIntersection();
	IModel* LoadModel(CString& strPath);
	void CreateGenerator();
	void UpdatePlane();
	void GetVertices();
	void CreateTempPoints();
	int FindIntersectionPoint(DIPoint* pt);
	void SetSegmentEnd(BYTE end, DIPoint* pt);
	void AddIntersection(DIPoint* pt);
	void Calculate();
	void Init();
	void AddSegmentIntersection();
	void CheckIntersectionOrder();
	bool GetOrientation(int i);

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:

	IDIObjGenerator* m_iDIObjGenerator;

	enum { tmpCount = 4 };

	I3Dpt*	m_i3Dpt[tmpCount];		// Temporary variables for intermediate calculations

	Plane	m_plane;		// Purely geometric object. Keeps position and location and performs calcualtions

	int m_nVertices;		// Vertex count in mesh of the object

	DIPoint m_vert[4];		// Vertex coordinates array of m_nVertices size

	int m_IntersCount;	// How many points are valid in m_intersection

	DIPoint m_intersection[4];	// For simplicity. We know that the object is a thetrahedral. 
								// Intersection with a plane can not have more than 4 points

	// Copy of numbers stored inside m_plane for GUI data excange with edit boxes
	// Location of the plane
	double m_xPlane;			
	double m_yPlane;
	double m_zPlane;

	double m_dirXPlane;		
	double m_dirYPlane;
	double m_dirZPlane;
public:
	afx_msg void OnCalculate();

//#ifdef _DEBUG
	void DumpPoint(DIPoint* pt);

	I3DBuggerT*	m_i3DBugger;
	IDraw*		m_iDraw;		// For drawing or rather dumping into debug stream
//#endif
	afx_msg void OnHelp();
};
