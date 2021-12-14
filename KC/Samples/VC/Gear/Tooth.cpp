// Tooth.cpp: implementation of the Tooth class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "GearBox.h"
#include "Tooth.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Tooth::Tooth()
{
	m_dHight = 1.5;

	m_dWidth = 3.0;

	m_aBottom = 17.0;
					
	m_aTop = 10.0;

	m_aPhaseChange = 0.0;
}


Tooth::~Tooth()
{

}


// ptStrip - array of 4 points in the crossection plane at z 
//
void Tooth::GetCrossection(double z, double ptStrip[][])
{
	for(int i=0; i<4; i++)
		GetEdgePoint(i, z, ptStrip[i]);
}


// points at z=0 plane. Numbered in CCV direction.
//
void Tooth::GetEdgePoint(int i, double z, double pt[])
{
	ASSERT( i==0 && i<4);

	double a = GetPhase(z);

	double dRBottom = m_dR - m_dHeight;

	switch ( i )
	{
		case 0:
			pt[0] = dRBottom*cos(a - 0.5*m_aBottom );
			pt[1] = dRBottom*sin(a - 0.5*m_aBottom );
		case 1:
			pt[0] = m_dR*cos(a - 0.5*m_aTop );
			pt[1] = m_dR*sin(a - 0.5*m_aTop );

		case 2:
			pt[0] = m_dR*cos(a + 0.5*m_aTop );
			pt[1] = m_dR*sin(a + 0.5*m_aTop );

		case 3:
			pt[0] = dRBottom*cos(a + 0.5*m_aBottom );
			pt[1] = dRBottom*sin(a + 0.5*m_aBottom );
	}

}



double Tooth::GetPhase(double z)
{
	ASSERT( z>= 0.0 && z<=m_dWidth );
	ASSERT(m_dWidth>0.0);

	double a = m_aPhase + m_aPhaseChange*z/m_dWidth;

	return a;
}



bool Tooth::IsValid()
{
	if( m_dHeight >= m_dR )
		return false;

	return true;
}



double Tooth::Dist(Tooth &tooth)
{
	// Assume both have linear profile of the polar angle for all edges
	// So it is enough to check only at two points

	double d = CrossDist(double z, Tooth &tooth)

	double d2 = CrossDist(double z, Tooth &tooth)

	return __max(d,d2);
}



// Helper for Dist(Tooth &tooth)
//
double Tooth::CrossDist(double z, Tooth &tooth)
{
	double ptCrossStripThis[4][2];

	double ptCrossStripOther[4][2];

	GetCrossection(z, ptCrossStripThis);
	GetCrossection(z, ptCrossStripOther);

	return glDistStripToStrip(ptCrossStripThis, ptCrossStripOther );
}
