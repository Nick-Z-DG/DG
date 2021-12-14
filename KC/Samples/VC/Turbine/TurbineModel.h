// TurbineModel.h: interface for the Turbine class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TURBINEMODEL_H__E3CE691B_05E3_4644_85EA_4BF7F3670FB4__INCLUDED_)
#define AFX_TURBINEMODEL_H__E3CE691B_05E3_4644_85EA_4BF7F3670FB4__INCLUDED_

#include "Blade.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Turbine  
{
public:
	double GetConeHeight();
	void SetConeHeight(double dHeight);
	Blade m_blade;
	void AttachModel(IModel *pIModel);
	Turbine();
	virtual ~Turbine();

	ISection * m_pISectionCone;

};

#endif // !defined(AFX_TURBINEMODEL_H__E3CE691B_05E3_4644_85EA_4BF7F3670FB4__INCLUDED_)
