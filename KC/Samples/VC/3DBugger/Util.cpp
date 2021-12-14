#include "StdAfx.h"
#include "Util.h"

Util::Util(void)
{
}

Util::~Util(void)
{
}


// Static. Copy pt1 into pt0
void Util::CopyPoint(DIPoint* pt0, DIPoint* pt1)
{
	for(BYTE i=0; i<3; i++)
		pt0->x[i] = pt1->x[i];
}

// Static. Copy iPt into pt
void Util::CopyPoint(DIPoint* pt, I3Dpt* iPt)
{
	iPt->Get( pt->x, pt->x+1, pt->x+2 );
}

void Util::CopyPointTo(DIPoint* pt, I3Dpt* iPt)
{
	iPt->Set( pt->x[0], pt->x[1], pt->x[2] );
}

void Util::CopyVector(DIVect* v, I3Dpt* iPt)
{
	iPt->Get( v->v, v->v+1, v->v+2 );
}

void Util::CopyVectorTo(DIVect* v, I3Dpt* iPt)
{
	iPt->Set( v->v[0], v->v[1], v->v[2] );
}

void Util::CopyVector(DIVect* v0, DIVect* v1)
{
	for(BYTE i=0; i<3; i++)
		v0->v[i] = v1->v[i];
}

// Static. Do points coinside up to a tolerrance?
//
bool Util::IsSame(DIPoint* pt0, DIPoint* pt1)
{
	for(BYTE i=0; i<3; i++)
	{
		if( fabs(pt0->x[i] - pt1->x[i]) > 1e-8 )
			return false;
	}
	return true;
}

void Util::SetCurrentName(CString& strName, IDraw* iDraw)
{
	IKCContext*	iKCContext = NULL;
	iDraw->QueryInterface(IID_IKCContext, (void**)&iKCContext);			CH(iKCContext);
	iKCContext->SetStringParam(0, strName.GetBuffer());	// Object name is the only string parameter currently
	iKCContext->Release();
}