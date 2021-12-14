// OgreBridgeDoc.cpp : implementation of the OgreBridgeDoc class
//

#include "stdafx.h"
#include "OgreBridge.h"

#include "OgreBridgeDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// OgreBridgeDoc

IMPLEMENT_DYNCREATE(OgreBridgeDoc, CDocument)

BEGIN_MESSAGE_MAP(OgreBridgeDoc, CDocument)
END_MESSAGE_MAP()


// OgreBridgeDoc construction/destruction

OgreBridgeDoc::OgreBridgeDoc()
{
	// TODO: add one-time construction code here

}

OgreBridgeDoc::~OgreBridgeDoc()
{
}

BOOL OgreBridgeDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// OgreBridgeDoc serialization

void OgreBridgeDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}


// OgreBridgeDoc diagnostics

#ifdef _DEBUG
void OgreBridgeDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void OgreBridgeDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// OgreBridgeDoc commands
