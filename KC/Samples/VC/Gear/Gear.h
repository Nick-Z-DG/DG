// Gear.h: interface for the Gear class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GEAR_H__E3E12EE9_CC68_4EA9_9D85_A65AC75A3E11__INCLUDED_)
#define AFX_GEAR_H__E3E12EE9_CC68_4EA9_9D85_A65AC75A3E11__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Gear  
{
public:
	void CheckValid();
	void SetHelix(double dHelix);
	double GetHelix();
	bool UpdateWidth();
	void GetBodyInterfaces();
	void UpdateModel();
	bool GetObjectParams();
	void AttachModel(IModel* pIModel);
	Gear();
	virtual ~Gear();

	double m_dR;	// Radius of the gear including tooh length.

	int m_nToothCount;

	double m_dToothHeight;		// along the gear radius

	double m_dWidth;	// Along axis of the gear ( z direction )

	double m_aBottom;  // angle of sector beetwen points on the front face plane
						  // between points where tooth joined the body of the gear
	double m_aTop;		// The same at the top

	double m_aPhaseChange;	// Change in polar angle
							// for the tooth edges between two base points
	IModel * m_pIModel;

	ISection * m_pISectionBody;

	ISection * m_pISectionTooth;	// The model has a single section and its single child - tooth
								// the tooth has an axial symmetry with repetition = m_nToothCount
	IAxiBase * m_pIAxiBase;		// Of the tooth

	IElement * m_iElemJoint[4];	// Joints of the main tooth in current crossection in CCV order
								// if looking from end of z axis. Starting from right top point

	ISymmetry * m_pISymmetryTooth;

	IElement * m_iElemSORGenerEnd[3];	// 2D points - ends of stright segment, which generates
										// Surface Of Revolution of the body
};

#endif // !defined(AFX_GEAR_H__E3E12EE9_CC68_4EA9_9D85_A65AC75A3E11__INCLUDED_)
