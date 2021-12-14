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

    class Plane
    {
        public PointDg m_location;

        public VectDg m_normal;

        public Plane()
        {
            m_location = Util.CreatePoint();
            m_normal = Util.CreateVector();

            for (byte i = 0; i < 3; i++)
            {
                m_location.x[i] = 0;
                m_normal[i] = 0;
            }

            m_normal[2] = 1;
        }

        public void Dump(I3DBuggerT i3DBugger)
        {
	        // This can also be done similar to Segment::Dump() replacing Begin(ePoints); with Begin(eLineLoop)
	        // And supplying four vertices. We will demonstrate usage if IDrawUtil instead
	        IDraw	iDraw = (IDraw)i3DBugger;
            IDrawUtil iDrawUtil = (IDrawUtil)i3DBugger;

	        // Save current rendering (dumping) frame
	        iDraw.PushMatrix();

	        // Position rendering (dumping) frame at m_location
	        // Reset the frame: make it identical to the global frame
	        iDraw.LoadIdentity();
	        // Shift into m_location
	        iDraw.Translate(m_location.x[0], m_location.x[1], m_location.x[2]);

	        // At this point origin is at the correct location. Direct z axis of rendering frame along m_normal
	        // This is what iDrawUtil.Disk() below expects
	        IFrame2 iFrame2 = (IFrame2)iDraw;

	        iFrame2.SetupAxes(2, ref m_normal, 0);

	        // Set name of the object to be able to identify in the dump
            int hash = this.GetHashCode();
            String strName = "Plane " + hash.ToString();
	        Util.SetCurrentName(strName, iDraw);

	        iDrawUtil.Disk(0, 3);

            i3DBugger.Dump();

	        iDraw.PopMatrix();		// Restore
        }
    }
}
