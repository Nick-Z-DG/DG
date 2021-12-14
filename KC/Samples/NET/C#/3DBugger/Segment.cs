using System;
using System.Collections.Generic;
using System.Text;
using DGKC;

namespace _DBugger
{
    #region  KCDefines
#if KC_X64
    using I3DBuggerT = I3DBugger64;
#else
     using I3DBuggerT = I3DBugger;
#endif
    #endregion

    class Segment
    {
        public IDIObjGenerator m_iDIObjGenerator;

	    public ILine		m_iLine;
	    public ILineGeom	m_iLineGeom;

	    public I3Dpt		m_dir;

	    public double m_length;

        public Segment(IDIObjGenerator iDIObjGenerator)
        {
	        m_iDIObjGenerator = iDIObjGenerator;
	        m_length = 0;
        }

        public void Setup()
        {
	        Object obj = m_iDIObjGenerator.Create2((int)EObjectType.eObjTypeLine);

	        m_iLine =  (ILine)obj;

	        m_iLineGeom = (ILineGeom)m_iLine;

            obj = m_iDIObjGenerator.Create(EObjectType.eObjType3DPoint);

            m_dir = (I3Dpt)obj;
        }

        public void SetEnds(I3Dpt iPt0, I3Dpt iPt1)
        {
	        if( m_iLine == null )
		        Setup();

	        m_length = iPt0.dist( iPt1 );

            PointDg pt0 = Util.CreatePoint();
	        Util.CopyPoint(pt0, iPt0);

	        m_iLine.Origin = ref pt0);

	        m_dir.Copy(iPt1);

	        m_dir.Subtr( iPt0 );

	        m_dir.Normalize();

            VectDg v = Util.CreateVector();
	        Util.CopyVector(v, m_dir);

	        m_iLine.Direction = ref v);
        }

        // Returns false if no intersection with the segment. intersectionPt - out resul
        //
        public bool IntersectPlane(Plane plane, ref PointDg intersectionPt)
        {
	        int res;
	        double position;

            res = m_iLineGeom.IntersectPlane(ref plane.m_location, ref plane.m_normal, out position);

	        if( res != 1 )
		        return false;

	        if( position<0 || position > m_length )
		        return false;								// The intersection is outside of the segment

	        m_iLine.GetPoint( position, ref intersectionPt);
	        return true;
        }

        // Save an object representing this segment into the dump stream
        public void Dump()
        {
            I3DBuggerT i3DBugger = (I3DBuggerT)m_iDIObjGenerator;
            IDraw iDraw = (IDraw)i3DBugger;

            IKCContext iKCContext = (IKCContext)iDraw;

            IKCStack iKCStack = (IKCStack)iKCContext;

	        // Save current settings, before modifying context
	        iKCStack.Push(0);		// Parameter does not matter in this case

	        iKCContext.SetBool(0, true);	// 0-"Transient" state variable 
								        //- Make the next object dumped via iDraw.End() a transient object
	        // We wnat segment dump to be transient because it is interesting only  on the current 
	        // intersection loop. If transient is set it will be removed from the scene on the next loop
	        // by BeginDump() in DBuggerDlg::Calculate()

	        // Set name of the object to be able to identify in the dump
            int hash = this.GetHashCode();
            String strName = "Segment " + hash.ToString();
	        iKCContext.SetString(0, strName);	        // Object name is the only string parameter currently

            PointDg pt0 = Util.CreatePoint();
            PointDg pt1 = Util.CreatePoint();

	        m_iLine.GetPoint(0, ref pt0);
	        m_iLine.GetPoint(m_length, ref pt1);

            iDraw.Color(0, 0.5, 0, 0);			//Dark green
            iDraw.Begin(EDrawPrimitive.eLineStrip);
            iDraw.Vertex(pt0.x[0], pt0.x[1], pt0.x[2]);
            iDraw.Vertex(pt1.x[0], pt1.x[1], pt1.x[2]);
            iDraw.End();
            i3DBugger.Dump();    // Flush stream to display all dumped objects in debugger

	        iKCStack.Pop(0);	// Restore transient state variable
        }
    }
}
