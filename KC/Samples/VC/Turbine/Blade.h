// Blade.h: interface for the Blade class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BLADE_H__4AF07C6B_09EF_44CB_B415_D6942D520389__INCLUDED_)
#define AFX_BLADE_H__4AF07C6B_09EF_44CB_B415_D6942D520389__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Blade  
{
public:
	void SetCrossPosnInside();
	void SetCurvature(double dCurv);
	double GetCurvature();
	void SetOuterDiam(double dOuterDiam);
	double GetOuterDiam();
	Blade();
	virtual ~Blade();

	ISection * m_pISectionBlade;
};

#endif // !defined(AFX_BLADE_H__4AF07C6B_09EF_44CB_B415_D6942D520389__INCLUDED_)
