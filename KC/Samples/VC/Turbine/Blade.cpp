// Blade.cpp: implementation of the Blade class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Turbine.h"
#include "Blade.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Blade::Blade()
{
	m_pISectionBlade = NULL;
}

Blade::~Blade()
{
	if(m_pISectionBlade)
		m_pISectionBlade->Release();
}


double Blade::GetOuterDiam()
{
	// Get extent of the blade in local z direction
	IAxiBase * pIAxiBase = NULL;

	// To see what is going on here in Modeling Studio make blade the current section.
	// In Objects menu select Hide not cuyrrent.
	// To disanble symmetries for a while in "Current Object" > Symmetries clear the check box
	// in the list. In Cur Obj form page turn "Show Local Frame" check box. 
	// Two numbers near the red ticks in the bottom left pane show knot positions in this section.
	// They are ends of all (two) edges in the section. (Selecting points in the right 
	// bottom pane will highlight the edges in 3D)

	// IAxiBase manages the array of knots.

	m_pISectionBlade->QueryInterface( IID_IAxiBase, (void**)&pIAxiBase);

	// To get z length of the section we need to get position of the last base knot (20.0 
	// on the start)

	double dLastKnot;

	pIAxiBase->GetKnotValue(1, &dLastKnot);

	// dLastKnot is position respective to the local frame of the blade
	// Add z poisition of the frame itself. To keep simple use hardcoded
	// from Modeling Studio. ("Cur Obj" form page, top right edit box)

	double dOuterDiam = dLastKnot + 2.45;

	pIAxiBase->Release();	

	return dOuterDiam;
}


void Blade::SetOuterDiam(double dOuterDiam)
{
	// See comments for Blade::GetOuterDiam()

	IAxiBase * pIAxiBase = NULL;

	m_pISectionBlade->QueryInterface( IID_IAxiBase, (void**)&pIAxiBase);

	// substract the localf rame z position
	//
	double dLastKnot = dOuterDiam - 2.45;

	pIAxiBase->SetKnotValue(1, dLastKnot);

	pIAxiBase->Release();	
}


double Blade::GetCurvature()
{
	// See comments in Turbine::SetConeHeight()
	IStrip * pIStrip = NULL;

	m_pISectionBlade->QueryInterface( IID_IStrip, (void**)&pIStrip);

	// Strip of the blade consists of a single curved patch. Get it

	IElement * pIElem = NULL;

	pIStrip->GetElement(0, true, &pIElem );	// true - wee need patch, not its edge

	// Curved patch has single parameter - curvature 
	// (See DI Models/Geometric Elements topic, 2D Arc paragraph in documentation)
	//
	double dCurv;

	pIElem->GetParam(0, &dCurv);	

	// All obtained interfaces must be released to prevent a leack
	pIElem->Release();
	pIStrip->Release();

	return dCurv;
}


void Blade::SetCurvature(double dCurv)
{
	// See comments in Turbine::SetConeHeight()
	IStrip * pIStrip = NULL;

	m_pISectionBlade->QueryInterface( IID_IStrip, (void**)&pIStrip);

	// Strip of the blade consists of a single curved patch. Get it

	IElement * pIElem = NULL;

	pIStrip->GetElement(0, true, &pIElem );	// true - wee need patch, not its edge

	// Make sure that current z position is internal in the valid range
	// See comments in SetCrossPosnInside()
	//
	SetCrossPosnInside();

	// Curved patch has single parameter - curvature 
	// (See DI Models/Geometric Elements topic, 2D Arc paragraph in documentation)
	//
	pIElem->SetParam(0, dCurv);	

	// All obtained interfaces must be released to prevent a leack
	pIElem->Release();
	pIStrip->Release();
}


void Blade::SetCrossPosnInside()
{
	// See comments for Blade::GetOuterDiam()

	IAxiBase * pIAxiBase = NULL;

	m_pISectionBlade->QueryInterface( IID_IAxiBase, (void**)&pIAxiBase);

	// Set curent crossecton position between two knots so that
	// any modifications to curvature will change curvature value
	// for all crossection positions
	// Note: assuming here that length of the blade section is always > 5.0
	pIAxiBase->SetCrossPosition(5.0);

	pIAxiBase->Release();	
}
