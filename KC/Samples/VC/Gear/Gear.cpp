// Gear.cpp: implementation of the Gear class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "GearApp.h"
#include "Gear.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Gear::Gear()
{
	m_dR = 5.0;
	
	m_dToothHeight = 1.5;

	m_dWidth = 3.0;

	m_aBottom = 17.0;
				 
	m_aTop = 10.0;

	m_aPhaseChange = 0.0;

	m_pIModel = NULL;
	m_pISectionBody = NULL;
	m_pISectionTooth = NULL;
	m_pIAxiBase = NULL;
	m_pISymmetryTooth = NULL;

	for(int i=0; i<4; i++)
		m_iElemJoint[i] = NULL;

	for( int j=0; j<3; j++)
		m_iElemSORGenerEnd[j] = NULL;

	m_nToothCount = 13;
}


Gear::~Gear()
{
	for(int i=0; i<4; i++)
	{
		if(m_iElemJoint[i])
			m_iElemJoint[i]->Release();
	}

	if( m_iElemSORGenerEnd[0] )
		m_iElemSORGenerEnd[0]->Release();

	if( m_iElemSORGenerEnd[1] )
		m_iElemSORGenerEnd[1]->Release();

	if( m_iElemSORGenerEnd[2] )
		m_iElemSORGenerEnd[2]->Release();

	if(m_pIAxiBase)
		m_pIAxiBase->Release();

	if(m_pISectionTooth)
		m_pISectionTooth->Release();

	if(m_pISectionBody)
		m_pISectionBody->Release();

	if(m_pISymmetryTooth)
		m_pISymmetryTooth->Release();

	if(m_pIModel)
		m_pIModel->Release();
}


void Gear::AttachModel(IModel *pIModel)
{
	m_pIModel = pIModel;

	GetObjectParams();
}


// Query all parameters from the model and store in this object variables
//
bool Gear::GetObjectParams()
{
	ASSERT(m_pIModel);

	VERIFY( m_pIModel->GetSection(0, &m_pISectionBody) == S_OK );

	ASSERT(m_pISectionBody);

	char szSectName[41];

	VERIFY( m_pISectionBody->GetName(szSectName) == S_OK);

	if( strcmp(szSectName, "Gear Body") != 0 )
	{
		AfxMessageBox( "The model is not a gear" );

		return false;
	}

	VERIFY( m_pISectionBody->GetChild (0, &m_pISectionTooth) == S_OK );

	ASSERT(m_pISectionTooth);

	if(m_pIAxiBase)
		m_pIAxiBase->Release();

	VERIFY( m_pISectionTooth->QueryInterface( IID_IAxiBase, 
									(void**)&m_pIAxiBase) == S_OK);
	ASSERT(m_pIAxiBase);

	// Get width of the gear
	//
	VERIFY( m_pIAxiBase->GetKnotValue(1, &m_dWidth)==S_OK);

	// Set crossection position at the front face of the gear
	//
	VERIFY( m_pIAxiBase->SetCrossPosition( 0.0 )==S_OK);

	// Get 2d crossectional line strip in (x,y) plane at z=0
	IStrip * pIStrip = NULL;

	VERIFY( m_pISectionTooth->QueryInterface( IID_IStrip, (void**)&pIStrip) == S_OK);

	ASSERT(pIStrip);

	// Get points in CCV order - base of the tooth. 
	//
	for(int i=0; i<4; i++)
		pIStrip->GetElement(i, false, &m_iElemJoint[i] );	// false - joint, not segment

	double pt[4][2];	// coords of the points

	for(int j=0; j<4; j++)
	{
		m_iElemJoint[j]->GetParam(0, pt[j]);	// in other words GetParam(0, &(pt[i][0]));
		m_iElemJoint[j]->GetParam(1, pt[j]+1);	// in other words GetParam(1, &(pt[i][1]));
	}

	// All points are expected in polar coordinates. In production code should add all checks
	// like in MiniCAD sample

	// The same for the top points
	//
	m_aTop = pt[1][1] - pt[0][1];

	// get difference in angles of points at tooth base.
	// Note: going around th e tooth in CCW direction. 
	// Difference of polar angles of ends of the bottom segment will be negative
	// We need m_aBottom as measure of length, so will take the opposote sign
	//
	m_aBottom =  pt[2][1] - pt[3][1];

	// Radius is the first polar coordinate. Take it for the point 1 
	// (second in CCW, one on the top of tooth)
	//
	m_dR = pt[0][0];

	m_dToothHeight = m_dR - pt[3][0];

	// Get the phase change. Expect that while crossection position x is changing from
	// 0.0 to m_dWidth the crossectiona picture only rotates in x,y plane without any other
	// changes in geometry. m_aPhaseChange is the angle of this rotation (Can be negative).

	// Move crossection position to the back face of the gear
	//
	VERIFY( m_pIAxiBase->SetCrossPosition( m_dWidth )==S_OK);

	// Note: no need to release and accuire again the strip and elements interfaces

	// Get angle of point 0 at new crossection
	//
	double dPhaseBack;

	m_iElemJoint[0]->GetParam(1, &dPhaseBack);

	m_aPhaseChange = dPhaseBack - pt[0][1];

	pIStrip->Release();

	// Get symmetry and update tooth count

	ISymmetries * pISymmetries = NULL;

	VERIFY( m_pISectionTooth->QueryInterface( IID_ISymmetries, (void **)&pISymmetries) == S_OK );

	ASSERT(pISymmetries);

	VERIFY( pISymmetries->GetSymmetry( 0, &m_pISymmetryTooth) == S_OK );

	ASSERT(m_pISymmetryTooth);

	m_pISymmetryTooth->GetRepeatCount(&m_nToothCount);

	m_nToothCount++;	// repeat = is how many additional duplicates of the first one

	pISymmetries->Release();

	return true;
}


void Gear::UpdateModel()
{
	// Check that member values are consistent. Correct if needed
	CheckValid();

	UpdateWidth();

	m_pISymmetryTooth->SetRepeatCount(m_nToothCount-1);

	// Set crossection position at the front face of the gear
	//
	VERIFY( m_pIAxiBase->SetCrossPosition( 0.0 )==S_OK);

	double dRBott = m_dR - m_dToothHeight;

	double pt[][2] = {
						{ m_dR, -0.5*m_aTop },
						{ m_dR, 0.5*m_aTop },
						{ dRBott, 0.5*m_aBottom },
						{ dRBott, -0.5*m_aBottom }
					};

	for(int k=0; k<4; k++)
	{
		m_iElemJoint[k]->SetParam(0, pt[k][0]);
		m_iElemJoint[k]->SetParam(1, pt[k][1]);
	}


	VERIFY( m_pIAxiBase->SetCrossPosition( m_dWidth )==S_OK);

	// Create edge point for the back face crossection
	// by rotating points by m_aPhaseChange angle
	//
	for(int j=0; j<4; j++)
		pt[j][1] += m_aPhaseChange;

	for( int i=0; i<4; i++)
	{
		m_iElemJoint[i]->SetParam(0, pt[i][0]);
		m_iElemJoint[i]->SetParam(1, pt[i][1]);
	}

	// Update Surface Of Revolution of the body
	if( m_iElemSORGenerEnd[0] == NULL )
		GetBodyInterfaces();

	// Not interested what y was
	m_iElemSORGenerEnd[0]->SetParam(0, m_dWidth);

	m_iElemSORGenerEnd[1]->SetParam(0, m_dWidth );
	m_iElemSORGenerEnd[1]->SetParam(1, dRBott );

	m_iElemSORGenerEnd[2]->SetParam(0, 0.0);
	m_iElemSORGenerEnd[2]->SetParam(1, dRBott);
}

void Gear::GetBodyInterfaces()
{
	// do it once
	ASSERT(m_iElemSORGenerEnd[0] == NULL);
	ASSERT(m_iElemSORGenerEnd[1] == NULL);
	ASSERT(m_pISectionBody);

	// Get 2d generating line strip
	IStrip * pIStrip = NULL;

	VERIFY( m_pISectionBody->QueryInterface( IID_IStrip, (void**)&pIStrip) == S_OK);

	ASSERT(pIStrip);

	pIStrip->GetElement(3, false, &m_iElemSORGenerEnd[0] );	// false - joint, not segment
	pIStrip->GetElement(4, false, &m_iElemSORGenerEnd[1] );	// false - joint, not segment
	pIStrip->GetElement(5, false, &m_iElemSORGenerEnd[2] );	// false - joint, not segment

	pIStrip->Release();
}



bool Gear::UpdateWidth()
{
	ASSERT(m_pIAxiBase);

	// Get width of the gear
	//
	double dWidth = -1;

	VERIFY( m_pIAxiBase->GetKnotValue(1, &dWidth)==S_OK);

	// Check if m_dWidth has changed since last update
	//
	if( fabs( dWidth - m_dWidth ) < 1e-5 )
		return false;						// no change

	VERIFY( m_pIAxiBase->SetKnotValue(1, m_dWidth)==S_OK);

	return true;
}


// Equivalent to m_aPhaseChange but more commen technicaly parameter
// = angle betwee axis direction and an edge
//
double Gear::GetHelix()
{
	double lArc = m_dR*m_aPhaseChange;

	double dHelix = atan2(lArc, m_dWidth);

	// Convert to degrees

	dHelix *= 180.0/PI;

	return dHelix;
}


void Gear::SetHelix(double dHelix)
{
	double dHelixRadians = PI*dHelix/180.0;

	double lArc = m_dWidth*tan( dHelixRadians );

	ASSERT(m_dR>0);  if( m_dR==0 ) return;

	m_aPhaseChange = lArc/m_dR;
}



void Gear::CheckValid()
{
	// Only few things for a sample code
	ASSERT(m_dR>0);
	ASSERT(m_dToothHeight>0);

	if( m_dToothHeight > m_dR )
		m_dToothHeight = m_dR;

	ASSERT(m_dWidth>0);
}
