using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using DGKC;

namespace _DBugger
{
    #region  KCDefines
#if KC_X64
    using UInt64 = Int64;
    using IIteratorT = IIterator64;
    using IListT = IList64;
    using IListUnkn_KCT = IListUnkn_KC64;
    using IRelationT = IRelation64;
    using IMetrics_DG = IMetrics64;
    using IMesh_DG = IMesh64;
    using IKCPathCollisionDetectorT = IKCPathCollisionDetector64;
    using IMesh_DG = IMeshMods64;
    using IMeshShading_KCT = IMeshShading_KC64;
    using ISimplex_DG = ISimplex64;
    using IMeshPointKCT = IMeshPointKC;
    using IMeshExT = IMeshEx64;
    using IMeshTopolT = IMeshTopol64;
    using IVertexSegment_DG = IEdge_KC64;
    using ISimplexEx_KCT = ISimplexEx_KC64;
    using IVertexEx_KCT = IVertexEx_KC64;
    using ISurfaceT = ISurface64;
    using I3DGridT = I3DGrid64;
    using IKinematicSet_KCT = IKinematicSet_KC64;
    using I3DBuggerT = I3DBugger64;
#else
    using UInt64 = Int32;
    using IIteratorT = IIterator;
    using IListT = KernCADnet.IList;
    using IListUnkn_KCT = IListUnkn_KC;
    using IRelationT = IRelation;
    using IMetrics_DG = IMetrics;
    using IMesh_DG = IBox_DG;
    using IKCPathCollisionDetectorT = IKCPathCollisionDetector;
    using IMesh_DG = IMeshMods;
    using IMeshShading_KCT = IMeshShading_KC;
    using ISimplex_DG = ISimplex;
    using IMeshPointKCT = IMeshPointKC;
    using IMeshExT = IMeshEx;
    using IMeshTopolT = IMeshTopol;
    using IVertexSegment_DG = IEdge_KC;
    using ISimplexEx_KCT = ISimplexEx_KC;
    using IVertexEx_KCT = IVertexEx_KC;
    using ISurfaceT = ISurface;
    using I3DGridT = I3DGrid;
    using IKinematicSet_KCT = IKinematicSet_KC;
    using I3DBuggerT = I3DBugger;
#endif
    #endregion
    public partial class DebuggerForm : Form
    {
        IDIObjGenerator m_iDIObjGenerator;

	    I3Dpt []	m_i3Dpt;		// Temporary variables for intermediate calculations

	    Plane	m_plane;		// Purely geometric object. Keeps position and location and performs calcualtions

	    int m_nVertices;		// Vertex count in mesh of the object

	    PointDg [] m_vert;		// Vertex coordinates array of m_nVertices size

	    int m_IntersCount;	// How many points are valid in m_intersection

	    PointDg [] m_intersection;	// For simplicity. We know that the object is a thetrahedral. 
								// Intersection with a plane can not have more than 4 points

	// Copy of numbers stored inside m_plane for GUI data excange with edit boxes
	// Location of the plane
	double m_xPlane;			
	double m_yPlane;
	double m_zPlane;

	double m_dirXPlane;		
	double m_dirYPlane;
	double m_dirZPlane;

	I3DBuggerT	m_i3DBugger;
    KernCADnet.IDraw m_iDraw;		// For drawing or rather dumping into debug stream

    public DebuggerForm()
        {
            InitializeComponent();

            m_nVertices = 4;
            m_i3Dpt = new I3Dpt[4];
            m_vert = new PointDg[4];
            m_intersection = new PointDg[4];
            for (byte i = 0; i < 4; i++)
            {
                m_vert[i].x = new double[3];
                m_intersection[i].x = new double[3];
            }
            m_plane = new Plane();

            m_xPlane = 0;
            m_yPlane = 0;
            m_zPlane = 1;

            m_dirXPlane = 0;
            m_dirYPlane = 0;
            m_dirZPlane = 1;
        }

        private void OnFormLoad(object sender, EventArgs e)
        {
            Init();
        }

        void Init()
        {
	        GetVertices();

	        CreateGenerator();

	        CreateTempPoints();

            m_i3DBugger = (I3DBuggerT)m_iDIObjGenerator;
            m_iDraw = (KernCADnet.IDraw)m_i3DBugger;
        }

        void CreateGenerator()
        {
	        ObjGeneratorDg generator = new ObjGeneratorDg();

            m_iDIObjGenerator = (IDIObjGenerator)generator; // Query
        }

        // Get corrdinates
        void GetVertices()
        {
	        // For simplicity use known values from the DBugger.glm model. See also DumpModel()
	        // See Morph sample for a way of accessing actual coordinates
	        m_vert[0].x[0] = 0;	m_vert[0].x[1] = 0;	m_vert[0].x[2] = 0;	
	        m_vert[1].x[0] = 1;	m_vert[1].x[1] = 0;	m_vert[1].x[2] = 0;	
	        m_vert[2].x[0] = 0;	m_vert[2].x[1] = 2;	m_vert[2].x[2] = 0;	
	        m_vert[3].x[0] = 0;	m_vert[3].x[1] = 0;	m_vert[3].x[2] = 3;	
        }

        void CreateTempPoints()
        {
	        // Construct three independent (of the rendered model) points for calculations
	        for(byte i=0; i<4; i++)
		        m_i3Dpt[i] = (I3Dpt)m_iDIObjGenerator.Create( EObjectType.eObjType3DPoint);
        }

        // end must be either 0 or 1
        void SetSegmentEnd(byte end, PointDg pt)
        {
	        m_i3Dpt[end].Set(pt.x[0], pt.x[1], pt.x[2]);
        }

        void UpdatePlane()
        {
	        m_plane.m_location.x[0] = m_xPlane;
	        m_plane.m_location.x[1] = m_yPlane;
	        m_plane.m_location.x[2] = m_zPlane;

	        m_plane.m_normal[0] = m_dirXPlane;
	        m_plane.m_normal[1] = m_dirYPlane;
	        m_plane.m_normal[2] = m_dirZPlane;
        }

        // Calculate points of the intersection loop m_intersection
        //
        void Calculate()
        {
	        m_IntersCount = 0;			// Reset

	        UpdatePlane();

	        m_i3DBugger.BeginSession();		// Clear the Debugger window

	        // Display the thetrahedral in debugger to see relative locations of other intermediate objects
	        DumpModel();

	        m_plane.Dump(m_i3DBugger);

	        // Loop through all segments in the mesh of the object.
	        // For simplicity (true for the std.mdg model) assume that there is a segment lining each vertex to each
	        //
	        for(int i=1; i<m_nVertices; i++)
	        {
		        m_i3DBugger.BeginDump();	// Remove transient objects (segment) from the scene to avoid clogging up

		        SetSegmentEnd(0, m_vert[i]);				// Copy coordinates into m_i3Dpt[0] for calculations

		        for(int j=0; j<i; j++)					// Skip zero length and reversed segments
		        {
			        SetSegmentEnd(1, m_vert[j]);			// Copy coordinates into m_i3Dpt[1] for calculations

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
        void AddSegmentIntersection()
        {
	        Segment segment = new Segment(m_iDIObjGenerator);	// The object generator creation is slowish because it involves COM
										        // For performance reuse the one created in this dialog
	        segment.SetEnds(m_i3Dpt[0], m_i3Dpt[1]);

            segment.Dump();

	        PointDg intersectionPt = Util.CreatePoint();

	        if( !segment.IntersectPlane(m_plane, ref intersectionPt) )
		        return;

	        AddIntersection(intersectionPt);
        }

        void AddIntersection(PointDg pt)
        {
	        if( FindIntersectionPoint(pt) >= 0 )
		        return;							// The point has been alreay added. Probably because the plane passes trough a vertex
	        Util.CopyPoint( m_intersection[m_IntersCount], pt );
	        m_IntersCount++;				

	        DumpPoint(pt);
        }
        
        // Normaly an objects should dump itself, but point is too simple object so we do not have a class for it
        void DumpPoint(PointDg pt)
        {
	        // Set name of the object to be able to identify in the dump
            int k = m_IntersCount-1;
	        String strName = "Inters point " + k.ToString();
	        Util.SetCurrentName(strName, m_iDraw);

	        // Draw the current intersection as large red point
            m_iDraw.PointSize(5);
            m_iDraw.Color(1, 0, 0, 0);
            m_iDraw.Begin(EDrawPrimitive.ePoints);
            m_iDraw.Vertex(pt.x[0], pt.x[1], pt.x[2]);
            m_iDraw.End();
            m_i3DBugger.Dump();    // Flush stream to display all dumped objects in debugger
        }

        // Returns -1 if not found
        int FindIntersectionPoint(PointDg pt)
        {
	        for( int i=0; i<m_IntersCount; i++)
	        {
		        if( Util.IsSame(m_intersection[i], pt) )
			        return i;
	        }
	        return -1;
        }

        void DumpModel()
        {
	        IModel_DG iModel = LoadModel("Models\\Samples\\DBugger.mdg"); //When path is relative it is relative to KernelCAD installation folder

	        // Instead of (int)iModel the hash can be any other number identifying the object or 0
	        // Debugger uses it to decide whether it is a new object or an update of a previously dumped one
	        m_i3DBugger.DumpObject(iModel, iModel.GetHashCode(), true, false);
        }

        // Load new model from strPath .mdg file
        //
        IModel_DG LoadModel(String strPath)
        {
            IModel_DG iModel = (IModel_DG)m_iDIObjGenerator.Create(EObjectType.eObjTypeModelGenerator);

            IModelEx iModelEx = (IModelEx)iModel;
	        iModelEx.Load(strPath);
	        return iModel;
        }

        void DumpIntersection()
        {
	        if( m_IntersCount < 1 )
		        return;

	        Util.SetCurrentName("Intersection face", m_iDraw);

	        // Dump a triangle representing the intersection. We are using the fact the section of thetrahedra (our model) 
	        // with a plane is a triangle in general case
	        m_iDraw.Color(1, 0, 1, 0);

	        if( m_IntersCount == 4 )
                m_iDraw.Begin(EDrawPrimitive.eQuads);
	        else if( m_IntersCount == 3 )
                m_iDraw.Begin(EDrawPrimitive.eTriangles);
	        else if( m_IntersCount == 2)
                m_iDraw.Begin(EDrawPrimitive.eLines);
	        else if( m_IntersCount == 1 )
                m_iDraw.Begin(EDrawPrimitive.ePoints);

	        for(int i=0; i<m_IntersCount; i++ )
                m_iDraw.Vertex(m_intersection[i].x[0], m_intersection[i].x[1], m_intersection[i].x[2]);

	        m_iDraw.End();
	        m_i3DBugger.Dump();    // Flush stream 
        }

        // Make sure intersection points are in correct order: Counter Clock Wise 
        // if looking from end of normal of the plane. Otherwise they do not form a valid quad for rendering
        // This method does some math
        //
        void CheckIntersectionOrder()
        {
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
	        PointDg temp = Util.CreatePoint();
	        Util.CopyPoint(temp, m_intersection[0]);
	        Util.CopyPoint(m_intersection[0], m_intersection[1]);
	        Util.CopyPoint(m_intersection[1], temp);
        }

        bool GetOrientation(int i)
        {
	        I3Dpt vector03 = m_i3Dpt[0];	// Vector with ends point 0 and point 3

	        int iPrev = i-1; 
	        if( iPrev < 0 )
		        iPrev = 3;	// Previous cyclic

	        Util.CopyPointTo(m_intersection[iPrev], vector03);	

	        Util.CopyPointTo(m_intersection[i], m_i3Dpt[1]);		// m_i3Dpt[1] keeps m_intersection[0] now

	        vector03.Subtr(m_i3Dpt[1]);		// Created the vector

	        I3Dpt	vector01 = m_i3Dpt[2];	// Vector with ends point 0 and point 1

	        int iNext = i+1; 
	        if( iNext > 3 )
		        iNext = 0;	// Next cyclic

	        Util.CopyPointTo(m_intersection[iNext], vector01);

	        vector01.Subtr(m_i3Dpt[1]);

	        I3Dpt	vectorCrossProd = m_i3Dpt[3];

	        vectorCrossProd.CrossProduct( vector03, vector01 );

	        I3Dpt	vectorPlaneNormal = m_i3Dpt[1];		// Reuse the interface

	        Util.CopyVectorTo(m_plane.m_normal, vectorPlaneNormal);

	        double prod = vectorCrossProd.Product( vectorPlaneNormal);

	        return prod >= 0;
        }

        private void OnClose(object sender, EventArgs e)
        {
            Close();
        }

        private void UpdateData()
        {
            m_xPlane = Double.Parse(editX.Text);
            m_yPlane = Double.Parse(editY.Text);
            m_zPlane = Double.Parse(editZ.Text);
            m_dirXPlane = Double.Parse(editNormalX.Text);
            m_dirYPlane = Double.Parse(editNormalY.Text);
            m_dirZPlane = Double.Parse(editNormalZ.Text);
        }

        private void OnCalculate(object sender, EventArgs e)
        {
            UpdateData();

            if (m_dirXPlane == 0 && m_dirYPlane == 0 && m_dirZPlane == 0)
            {
                m_dirXPlane = 0;
                m_dirYPlane = 0;
                m_dirZPlane = 1;
                MessageBox.Show("Normal vector must not be zero");
                return;
            }

            Calculate();
        }
    }
}