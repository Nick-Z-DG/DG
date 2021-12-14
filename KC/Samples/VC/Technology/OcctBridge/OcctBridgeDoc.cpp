// OcctBridgeDoc.cpp : implementation of the OcctBridgeDoc class
//

#include "stdafx.h"
#include "OcctBridge.h"

#include "OcctBridgeDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// OcctBridgeDoc

IMPLEMENT_DYNCREATE(OcctBridgeDoc, CDocument)

BEGIN_MESSAGE_MAP(OcctBridgeDoc, CDocument)
END_MESSAGE_MAP()


// OcctBridgeDoc construction/destruction

OcctBridgeDoc::OcctBridgeDoc()
{
	// TODO: add one-time construction code here

}

OcctBridgeDoc::~OcctBridgeDoc()
{
}

BOOL OcctBridgeDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// OcctBridgeDoc serialization

void OcctBridgeDoc::Serialize(CArchive& ar)
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


// OcctBridgeDoc diagnostics

#ifdef _DEBUG
void OcctBridgeDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void OcctBridgeDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// OcctBridgeDoc commands
