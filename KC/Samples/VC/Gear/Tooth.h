// Tooth.h: interface for the Tooth class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TOOTH_H__48DB2BD7_6F20_420D_ACA5_E44DD68D59BA__INCLUDED_)
#define AFX_TOOTH_H__48DB2BD7_6F20_420D_ACA5_E44DD68D59BA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Tooth  
{
public:
	double CrossDist(double z, Tooth &tooth);
	double Dist( Tooth &tooth);
	bool IsValid();
	double GetPhase(double z);
	void GetEdgePoint(int i, double pt[2]);
	bool GetCrossection(double z, double ptStrip[][]);
	Tooth();
	virtual ~Tooth();

	double m_dR;	// Radius of the gear including tooh length.

	double m_dHeight;		// along the gear radius

	double m_dWidth;	// Along axis of the gear ( z direction ) = width of the whole gear

	double m_aBottom;  // angle of sector beetwen points on the front face plane
						  // between points where tooth joined the body of the gear
	double m_aTop;

	double m_aPhase;	   // Angle between middle of the tooth and x 
						   //axis - current position of the tooth

	double m_aPhaseChange	// Change in phase while crossection moves from z=0 position to
							// z = m_dWidth. Determines angle between axis of the gear and
							// the tooth. In terms of the model = change of the polar angle
							// for the tooth edges between two base points
};

#endif // !defined(AFX_TOOTH_H__48DB2BD7_6F20_420D_ACA5_E44DD68D59BA__INCLUDED_)
