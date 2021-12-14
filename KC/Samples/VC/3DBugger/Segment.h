#pragma once

#include "Plane.h"

class Segment
{
public:
	void Dump();
	void Setup();
	void SetEnds(I3Dpt* iPt0, I3Dpt* iPt1);
	bool IntersectPlane(Plane& plane, DIPoint& intersectionPt);
	Segment(void);
	Segment(IDIObjGenerator* iDIObjGenerator);
	~Segment(void);

	IDIObjGenerator* m_iDIObjGenerator;

	ILine*		m_iLine;
	ILineGeom*	m_iLineGeom;

	I3Dpt*		m_dir;

	double m_length;
};
