#include "StdAfx.h"
#include "Segment.h"
#include "Util.h"

Segment::Segment(void)
{
	m_iDIObjGenerator = NULL;
	m_iLine = NULL;
	m_iLineGeom = NULL;
	m_length = 0;
}

Segment::Segment(IDIObjGenerator* iDIObjGenerator)
{
	m_iLine = NULL;
	m_iLineGeom = NULL;
	m_iDIObjGenerator = iDIObjGenerator;
	m_length = 0;
}

Segment::~Segment(void)
{
	if(m_iLineGeom)
		m_iLineGeom->Release();
	if(m_iLine)
		m_iLine->Release();
}

void Segment::Setup()
{
	VARIANT obj;
	m_iDIObjGenerator->Create2(eObjTypeLine, &obj);
	m_iLine =  (ILine*)obj.punkVal;

	m_iLine->QueryInterface(IID_ILineGeom, (void**)&m_iLineGeom);			CH(m_iLineGeom);

	m_iDIObjGenerator->Create( eObjType3DPoint, (IUnknown**)&m_dir);
}

void Segment::SetEnds(I3Dpt* iPt0, I3Dpt* iPt1)
{
	if( !m_iLine )
		Setup();

	iPt0->Dist( iPt1, &m_length );

	DIPoint pt0;
	Util::CopyPoint(&pt0, iPt0);

	m_iLine->SetOrigin(&pt0);

	m_dir->Copy(iPt1);

	m_dir->Subtr( iPt0 );

	VARIANT_BOOL result;
	m_dir->Normalize(&result);

	DIVect v;
	Util::CopyVector(&v, m_dir);

	m_iLine->SetDirection(&v);
}

// Returns false if no intersection with the segment. intersectionPt - out resul
//
bool Segment::IntersectPlane(Plane& plane, DIPoint& intersectionPt)
{
	int res;
	double position;
	double segmLength = -1;

	m_iLineGeom->IntersectPlane(&plane.m_location, &plane.m_normal, &position, &res );

	if( res != 1 )
		return false;

	if( position<0 || position > m_length )
		return false;								// The intersection is outside of the segment

	m_iLine->GetPoint( position, &intersectionPt);
	return true;
}

// Save an object representing this segment into the dump stream
void Segment::Dump()
{
	I3DBuggerT*	i3DBugger = NULL;
	m_iDIObjGenerator->QueryInterface(IID_I3DBuggerT, (void**)&i3DBugger);			CH(i3DBugger);

	IDraw*	iDraw = NULL;	
	i3DBugger->QueryInterface(IID_IDraw, (void**)&iDraw);			CH(iDraw);

	IKCContext*	iKCContext = NULL;
	iDraw->QueryInterface(IID_IKCContext, (void**)&iKCContext);			CH(iKCContext);

	IKCStack*	iKCStack = NULL;
	iKCContext->QueryInterface(IID_IKCStack, (void**)&iKCStack);			CH(iKCStack);

	// Save current settings, before modifying context
	iKCStack->Push(0);		// Parameter does not matter in this case

	iKCContext->SetBoolParam(0, VARIANT_TRUE);	// 0-"Transient" state variable 
								//- Make the next object dumped via iDraw->End() a transient object
	// We wnat segment dump to be transient because it is interesting only  on the current 
	// intersection loop. If transient is set it will be removed from the scene on the next loop
	// by BeginDump() in DBuggerDlg::Calculate()

	// Set name of the object to be able to identify in the dump
	CString strName;
	strName.Format("Segment %#2x", this);
	iKCContext->SetStringParam(0, strName.GetBuffer());	// Object name is the only string parameter currently

	DIPoint pt0,pt1;
	m_iLine->GetPoint(0, &pt0);
	m_iLine->GetPoint(m_length, &pt1);

    iDraw->Color(0, 0.5, 0, 0);			//Dark green
	iDraw->Begin(eLineStrip);
    iDraw->Vertex(pt0.x[0], pt0.x[1], pt0.x[2]);
	iDraw->Vertex(pt1.x[0], pt1.x[1], pt1.x[2]);
    iDraw->End();
    i3DBugger->Dump();    // Flush stream to display all dumped objects in debugger

	iKCStack->Pop(0);	// Restore transient state variable

	iKCStack->Release();
	iKCContext->Release();
	iDraw->Release();
	i3DBugger->Release();
}