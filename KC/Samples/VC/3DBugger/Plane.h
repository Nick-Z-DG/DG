#pragma once

// Purely geometric object. Keeps position and location and performs calcualtions

class Plane
{
public:
	void Dump(I3DBuggerT* i3DBugger);
	Plane(void);
	~Plane(void);

	DIPoint m_location;

	DIVect	m_normal;
};
