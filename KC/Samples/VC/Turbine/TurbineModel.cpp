// TurbineModel.cpp: implementation of the Turbine class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Turbine.h"
#include "TurbineModel.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Turbine::Turbine()
{
	m_pISectionCone = NULL;	
}

Turbine::~Turbine()
{
	if( m_pISectionCone )
		m_pISectionCone->Release();
}

// Owner of the DG Kernel Control (CTurbineDlg) should retrieve IModel from the control
// and call this function
// Set reference to the IModel to enable manipulation of the the geometry
//
void Turbine::AttachModel(IModel *pIModel)
{
	// Get Access to Cone section. From modeling we know that there is only one top 
	// level section, namely Cone
	// (See Turbine.mdg in Model explorer of DIStudio v1.2)
	// We cane verify it all here like in Gear::GetObjectParams() of the Gear sample
	// Will keep it simple for now.
	//
	pIModel->GetSection(0, &m_pISectionCone);

	// In the model blade is the second child of (attached to) the Cone.
	// See Model Explorer in the Studio
	// Get its IObject interface and store it into m_blade object.
	// 
	m_pISectionCone->GetChild (1, &m_blade.m_pISectionBlade);	// 0-based

	// Note: when vieving the model many blades appear because in the Blade.mdg model
	// the Blade section is set to be drawn repeatedly with rotation around global z axis
	// In Modeling Studio (v1.2) this behaviour is controlled using "Current Object" > Symmetries
	// dialog from the menu (Make sure Blade is current section using Model Explorer)
	// Gear::GetObjectParams() (in the end ) from the gear sample shows how to program symmetries

	pIModel->Release();
}


// Modify position of the apex
//
void Turbine::SetConeHeight(double dHeight)
{
	// Surface of the section is a strip. For general section it is a strip
	// of patches joined by their edges. For Surface Of Revolution (Cone is an SOR)
	// the strip if the strip of lines ( rotatetion of which around z axis creates the surface)
	// To see the strip in Modeling Studio make the cone current using Model Explorer and look 
	// at the bottom pane.

	IStrip * pIStrip = NULL;

	m_pISectionCone->QueryInterface( IID_IStrip, (void**)&pIStrip);

	// Strip of the cone consists of a single straight line. Apex is the point with index 1.
	// (can be verified by right clicking in the bottom pane and selecting "Strip Order" option.
	// So get the point 1:

	IElement * pIElem = NULL;

	pIStrip->GetElement(1, false, &pIElem );	// false - wee need point 1, 
												// not segment 1 from the strip

	// Set the first coordinate of the point. Coordinates are two avaivable parameters
	// in this particular element. It is all possible to query how many parameters
	// a particular element has and get their names to make sure
	//
	pIElem->SetParam(0, dHeight);	

	// All obtained interfaces must be released to prevent a leack
	pIElem->Release();
	pIStrip->Release();
}


double Turbine::GetConeHeight()
{
	// See coments in SetConeHeight()
	// We could have kept pIStrip and pIElem in the Turbine member variables
	// Will Keep it simple for the first time

	IStrip * pIStrip = NULL;

	m_pISectionCone->QueryInterface( IID_IStrip, (void**)&pIStrip);

	IElement * pIElem = NULL;

	pIStrip->GetElement(1, false, &pIElem );	// false - wee need point 1, 
												// not segment 1 from the strip
	double dHeight;
		
	pIElem->GetParam(0, &dHeight);	

	// All obtained interfaces must be released to prevent a leack
	pIElem->Release();
	pIStrip->Release();

	return dHeight;
}
