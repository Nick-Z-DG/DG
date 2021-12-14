// DBuggerDlg.cpp : implementation file
//
#include "stdafx.h"
#include "3DBugger.h"
#include "DBuggerDlg.h"
#include "Segment.h"
#include "Util.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// DBuggerDlg dialog

DBuggerDlg::DBuggerDlg(CWnd* pParent /*=NULL*/)
	: CDialog(DBuggerDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

	m_iDIObjGenerator = NULL;

	for(BYTE i=0; i<tmpCount; i++)
		m_i3Dpt[i] = NULL;

	m_nVertices = 4;

	m_xPlane = 0;
	m_yPlane = 0;
	m_zPlane = 1;

	m_dirXPlane = 0;		
	m_dirYPlane = 0;
	m_dirZPlane = 1;

	m_IntersCount = 0;
	// Normally this #ifdef would be enabled. We need to be able to run it in release version too 
//#ifdef _DEBUG
	m_i3DBugger = NULL;
	m_iDraw = NULL;
//#endif
}

void DBuggerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	DDX_Text(pDX, IDC_EDIT_LOCATION_X, m_xPlane);
	DDX_Text(pDX, IDC_EDIT_LOCATION_Y, m_yPlane);
	DDX_Text(pDX, IDC_EDIT_LOCATION_Z, m_zPlane);
	DDX_Text(pDX, IDC_EDIT_NORMAL_X, m_dirXPlane);
	DDX_Text(pDX, IDC_EDIT_NORMAL_Y, m_dirYPlane);
	DDX_Text(pDX, IDC_EDIT_NORMAL_Z, m_dirZPlane);
}

BEGIN_MESSAGE_MAP(DBuggerDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON_CALCULATE, OnCalculate)
	ON_BN_CLICKED(IDC_BUTT_HELP, &DBuggerDlg::OnHelp)
END_MESSAGE_MAP()


// DBuggerDlg message handlers

BOOL DBuggerDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	Init();

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void DBuggerDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR DBuggerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void DBuggerDlg::Init()
{
	GetVertices();

	CreateGenerator();

	CreateTempPoints();

	// Normally this #ifdef would be enabled. We need to be able to run it in release version too
//#ifdef _DEBUG
	m_iDIObjGenerator->QueryInterface(IID_I3DBuggerT, (void**)&m_i3DBugger);			CH(m_i3DBugger);

	m_i3DBugger->QueryInterface(IID_IDraw, (void**)&m_iDraw);			CH(m_iDraw);
//#endif
}

void DBuggerDlg::CreateGenerator()
{
	// Start COM
	CoInitialize(NULL);

	LPCLASSFACTORY pClf; 
    HRESULT hr;
	// Use COM API call to Create Class Factory ( generic obejct constructor )
    if( (hr = ::CoGetClassObject(
									CLSID_DIObjGenerator, 
									CLSCTX_INPROC_SERVER,
									NULL, IID_IClassFactory, 
									(void **) &pClf) ) 
								!= NOERROR) 
	{
        TRACE("unable to find CLSID -- error = %x\n", hr);
        return;
    }
	// Use the factory to create an object of Model class
    if( pClf->CreateInstance(NULL, IID_IDIObjGenerator, (void**)&m_iDIObjGenerator) != S_OK )
		return;
    pClf->Release();
}

// Get corrdinates
void DBuggerDlg::GetVertices()
{
	// For simplicity use known values from the DBugger.mdg model. See also DumpModel()
	// See Morph sample for a way of accessing actual coordinates
	m_vert[0].x[0] = 0;	m_vert[0].x[1] = 0;	m_vert[0].x[2] = 0;	
	m_vert[1].x[0] = 1;	m_vert[1].x[1] = 0;	m_vert[1].x[2] = 0;	
	m_vert[2].x[0] = 0;	m_vert[2].x[1] = 2;	m_vert[2].x[2] = 0;	
	m_vert[3].x[0] = 0;	m_vert[3].x[1] = 0;	m_vert[3].x[2] = 3;	
}

void DBuggerDlg::CreateTempPoints()
{
	// Construct three independent (of the rendered model) points for calculations
	for(BYTE i=0; i<tmpCount; i++)
		m_iDIObjGenerator->Create( eObjType3DPoint, (IUnknown**)&m_i3Dpt[i]);
}

// end must be either 0 or 1
void DBuggerDlg::SetSegmentEnd(BYTE end, DIPoint* pt)
{
	m_i3Dpt[end]->Set(pt->x[0], pt->x[1], pt->x[2]);
}

void DBuggerDlg::UpdatePlane()
{
	m_plane.m_location.x[0] = m_xPlane;
	m_plane.m_location.x[1] = m_yPlane;
	m_plane.m_location.x[2] = m_zPlane;

	m_plane.m_normal.v[0] = m_dirXPlane;
	m_plane.m_normal.v[1] = m_dirYPlane;
	m_plane.m_normal.v[2] = m_dirZPlane;
}

// Calculate points of the intersection loop m_intersection
//
void DBuggerDlg::Calculate()
{
	m_IntersCount = 0;			// Reset

	UpdatePlane();

	m_i3DBugger->BeginSession();		// Clear the Debugger window

	// Display the thetrahedral in debugger to see relative locations of other intermediate objects
	DumpModel();

	m_plane.Dump(m_i3DBugger);

	// Loop through all segments in the mesh of the object.
	// For simplicity (true for the std.mdg model) assume that there is a segment lining each vertex to each
	//
	for(int i=1; i<m_nVertices; i++)
	{
		m_i3DBugger->BeginDump();	// Remove transient objects (segment) from the scene to avoid clogging up

		SetSegmentEnd(0, m_vert+i);				// Copy coordinates into m_i3Dpt[0] for calculations

		for(int j=0; j<i; j++)					// Skip zero length and reversed segments
		{
			SetSegmentEnd(1, m_vert+j);			// Copy coordinates into m_i3Dpt[1] for calculations

			// If the segments has an intersection with the plane add the point to intersection array
			AddSegmentIntersection();
		}
	}

	if( m_IntersCount > 3 )
		CheckIntersectionOrder();// Make sure points in CCW order in intersection plane to make the intersection a valid quad

	// Display result
	DumpIntersection();	
	// Depending on location and orientation of the plane 
	// The intersection will appear as meshed surface: triangle or
	// a rectangle (divided in two simplexes in wire frame view) 
	// intersection can also be a point or segment or empty (no intersection)
}

// Calculate intersection (if exists) of segment betweenthe points with the plane
// Add the intersection point to the intersection loop
//
void DBuggerDlg::AddSegmentIntersection()
{
	Segment segment(m_iDIObjGenerator);	// The object generator creation is slowish because it involves COM
										// For performance reuse the one created in this dialog
	segment.SetEnds(m_i3Dpt[0], m_i3Dpt[1]);


	segment.Dump();


	DIPoint intersectionPt;

	if( !segment.IntersectPlane(m_plane, intersectionPt) )
		return;

	AddIntersection(&intersectionPt);
}


void DBuggerDlg::AddIntersection(DIPoint* pt)
{
	if( FindIntersectionPoint(pt) >= 0 )
		return;							// The point has been alreay added. Probably because the plane passes trough a vertex
	Util::CopyPoint( m_intersection + m_IntersCount, pt );
	m_IntersCount++;				
	ASSERT(m_IntersCount<=4); // Otherwise index willl be out of bounds. DBugger.mdg must not have more

	DumpPoint(pt);
}

// Normaly an objects should dump itself, but point is too simple object so we do not have a class for it
void DBuggerDlg::DumpPoint(DIPoint* pt)
{
	// Set name of the object to be able to identify in the dump
	CString strName;
	strName.Format("Inters point %d", m_IntersCount-1);
	Util::SetCurrentName(strName, m_iDraw);

	// Draw the current intersection as large red point
    m_iDraw->PointSize(5);
    m_iDraw->Color(1, 0, 0, 0);
	m_iDraw->Begin(ePoints);
    m_iDraw->Vertex(pt->x[0], pt->x[1], pt->x[2]);
    m_iDraw->End();
    m_i3DBugger->Dump();    // Flush stream to display all dumped objects in debugger
}

// Returns -1 if not found
int DBuggerDlg::FindIntersectionPoint(DIPoint* pt)
{
	for( BYTE i=0; i<m_IntersCount; i++)
	{
		if( Util::IsSame(m_intersection+i, pt) )
			return i;
	}
	return -1;
}

void DBuggerDlg::OnCalculate()
{
	UpdateData();

	if( m_dirXPlane==0 && m_dirYPlane==0 && m_dirZPlane==0 )
	{
		m_dirXPlane = 0;		
		m_dirYPlane = 0;
		m_dirZPlane = 1;
		AfxMessageBox("Normal vector must not be zero");
		UpdateData(FALSE);
		return;
	}

	Calculate();
}

void DBuggerDlg::DumpModel()
{
	IModel* iModel = LoadModel(CString("Models\\Samples\\DBugger.mdg")); //When path is relative it is relative to DG Kernel installation folder

	// Instead of (int)iModel the hash can be any other number identifying the object or 0
	// Debugger uses it to decide whether it is a new object or an update of a previously dumped one
	m_i3DBugger->DumpObject(iModel, (int)iModel, VARIANT_TRUE, VARIANT_FALSE);
}

// Load new model from strPath .mdg file
//
IModel* DBuggerDlg::LoadModel(CString& strPath)
{
	IModel* iModel = NULL;
	m_iDIObjGenerator->Create( eObjTypeModelGenerator, (IUnknown**)&iModel);

	IModelEx* iModelEx = NULL;
	iModel->QueryInterface(IID_IModelEx, (void**)&iModelEx);			CHN(iModelEx);
	iModelEx->Load(strPath.GetBuffer());
	iModelEx->Release();
	return iModel;
}

void DBuggerDlg::DumpIntersection()
{
	if( m_IntersCount < 1 )
		return;

	Util::SetCurrentName(CString("Intersection face"), m_iDraw);

	// Dump a triangle representing the intersection. We are using the fact the section of thetrahedra (our model) 
	// with a plane is a triangle in general case
	m_iDraw->Color(1, 0, 1, 0);

	if( m_IntersCount == 4 )
		m_iDraw->Begin(eQuads);
	else if( m_IntersCount == 3 )
		m_iDraw->Begin(eTriangles);
	else if( m_IntersCount == 2)
		m_iDraw->Begin(eLines);
	else if( m_IntersCount == 1 )
		m_iDraw->Begin(ePoints);

	for(int i=0; i<m_IntersCount; i++ )
		m_iDraw->Vertex( m_intersection[i].x[0], m_intersection[i].x[1], m_intersection[i].x[2] );

	m_iDraw->End();
	m_i3DBugger->Dump();    // Flush stream 
}

// Make sure intersection points are in correct order: Counter Clock Wise 
// if looking from end of normal of the plane. Otherwise they do not form a valid quad for rendering
// This method does some math
//
void DBuggerDlg::CheckIntersectionOrder()
{
	ASSERT(m_IntersCount==4);
	if( m_IntersCount < 4 )
		return;

	int i;
	// Check that orientation of vectors vector01 (point 0 to point 1 ), vector03 and normal of the plane is positive
	// and repeat it for all points. If orientation has chnanged the sequence is wrong
	bool orientation = GetOrientation(0);

	for( i=1; i<3; i++)
	{
		if( GetOrientation(i) != orientation )
			break;
	}

	if( i == 3 )
		return; //everything if fine

	// Swap the first and the second points
	DIPoint temp;
	Util::CopyPoint(&temp, m_intersection);
	Util::CopyPoint(m_intersection, m_intersection+1);
	Util::CopyPoint(m_intersection+1, &temp);
}

bool DBuggerDlg::GetOrientation(int i)
{
	I3Dpt*	vector03 = m_i3Dpt[0];	// Vector with ends point 0 and point 3

	int iPrev = i-1; 
	if( iPrev < 0 )
		iPrev = 3;	// Previous cyclic

	Util::CopyPointTo(m_intersection+iPrev, vector03);	

	Util::CopyPointTo(m_intersection+i, m_i3Dpt[1]);		// m_i3Dpt[1] keeps m_intersection[0] now

	vector03->Subtr(m_i3Dpt[1]);		// Created the vector

	I3Dpt*	vector01 = m_i3Dpt[2];	// Vector with ends point 0 and point 1

	int iNext = i+1; 
	if( iNext > 3 )
		iNext = 0;	// Next cyclic

	Util::CopyPointTo(m_intersection+iNext, vector01);

	vector01->Subtr(m_i3Dpt[1]);

	I3Dpt*	vectorCrossProd = m_i3Dpt[3];

	vectorCrossProd->CrossProduct( vector03, vector01 );

	I3Dpt*	vectorPlaneNormal = m_i3Dpt[1];		// Reuse the interface

	Util::CopyVectorTo(&m_plane.m_normal, vectorPlaneNormal);

	double prod;
	vectorCrossProd->Product( vectorPlaneNormal, &prod );

	return prod >= 0;
}

void DBuggerDlg::OnHelp()
{
	DIHelp help("Samples/3DBugger.aspx");	
}
