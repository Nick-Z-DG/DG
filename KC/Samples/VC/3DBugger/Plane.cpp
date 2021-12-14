#include "StdAfx.h"
#include "Plane.h"
#include "Util.h"

Plane::Plane(void)
{
	for(BYTE i=0; i<3; i++)
	{
		m_location.x[i] = 0;
		m_normal.v[i] = 0;
	}

	m_normal.v[2] = 1;
}

Plane::~Plane(void)
{
}

void Plane::Dump(I3DBuggerT*	i3DBugger)
{
	// This can also be done similar to Segment::Dump() replacing Begin(ePoints); with Begin(eLineLoop)
	// And supplying four vertices. We will demonstrate usage if IDrawUtil instead

	IDrawUtil*	iDrawUtil = NULL;	
	i3DBugger->QueryInterface(IID_IDrawUtil, (void**)&iDrawUtil);			CH(iDrawUtil);

	IDraw*	iDraw = NULL;	
	i3DBugger->QueryInterface(IID_IDraw, (void**)&iDraw);			CH(iDraw);

	// Save current rendering (dumping) frame
	iDraw->PushMatrix();

	// Position rendering (dumping) frame at m_location
	// Reset the frame: make it identical to the global frame
	iDraw->LoadIdentity();
	// Shift into m_location
	iDraw->Translate(m_location.x[0], m_location.x[1], m_location.x[2]);

	// At this point origin is at the correct location. Direct z axis of rendering frame along m_normal
	// This is what iDrawUtil->Disk() below expects
	IFrame2* iFrame2 = NULL;
	iDraw->QueryInterface(IID_IFrame2, (void**)&iFrame2);			
	CH(iFrame2);

	iFrame2->SetupAxes(2, &m_normal, 0);

	// Set name of the object to be able to identify in the dump
	CString strName;
	strName.Format("Plane %#2x", this);
	Util::SetCurrentName(strName, iDraw);

	iDrawUtil->Disk(0, 3);

    i3DBugger->Dump();

	iDraw->PopMatrix();		// Restore

	iFrame2->Release();
	iDraw->Release();
	iDrawUtil->Release();
}