// OgreBridgeDoc.h : interface of the OgreBridgeDoc class
//


#pragma once


class OgreBridgeDoc : public CDocument
{
protected: // create from serialization only
	OgreBridgeDoc();
	DECLARE_DYNCREATE(OgreBridgeDoc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementation
public:
	virtual ~OgreBridgeDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


