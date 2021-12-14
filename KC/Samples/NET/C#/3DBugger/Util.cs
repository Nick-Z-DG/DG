using System;
using System.Collections.Generic;
using System.Text;
using DGKC;

namespace _DBugger
{
    class Util
    {
        // Static. Copy pt1 into pt0
        public static void CopyPoint(PointDg pt0, PointDg pt1)
        {
	        for(byte i=0; i<3; i++)
		        pt0.x[i] = pt1.x[i];
        }

        // Static. Copy iPt into pt
        public static void CopyPoint(PointDg pt, I3Dpt iPt)
        {
            iPt.Get(out pt.x[0], out pt.x[1], out pt.x[2]);
        }

        public static void CopyPointTo(PointDg pt, I3Dpt iPt)
        {
	        iPt.Set( pt.x[0], pt.x[1], pt.x[2] );
        }

        public static void CopyVector(VectDg v, I3Dpt iPt)
        {
            iPt.Get(out v[0], out v[1], out v[2]);
        }

        public static void CopyVectorTo(VectDg v, I3Dpt iPt)
        {
	        iPt.Set( v[0], v[1], v[2] );
        }

        public static void CopyVector(VectDg v0, VectDg v1)
        {
	        for(byte i=0; i<3; i++)
		        v0[i] = v1[i];
        }

        // Static. Do points coinside up to a tolerrance?
        public static bool IsSame(PointDg pt0, PointDg pt1)
        {
	        for(byte i=0; i<3; i++)
	        {
		        if( Math.Abs(pt0.x[i] - pt1.x[i]) > 1e-8 )
			        return false;
	        }
	        return true;
        }

        public static void SetCurrentName(String strName, IDraw iDraw)
        {
            IKCContext iKCContext = (IKCContext)iDraw;
	        iKCContext.SetString(0, strName);	// Object name is the only string parameter currently
        }

        public static PointDg CreatePoint()
        {
            PointDg pt = new PointDg();
            pt.x = new double[3];
            return pt;
        }

        public static VectDg CreateVector()
        {
            VectDg pt = new VectDg();
            pt.v = new double[3];
            return pt;
        }
    }
}
