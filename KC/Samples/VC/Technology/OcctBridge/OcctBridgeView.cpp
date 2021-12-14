// OcctBridgeView.cpp : implementation of the OcctBridgeView class
#include "stdafx.h"
#include "OcctBridge.h"
#include "OcctBridgeDoc.h"
#include "OcctBridgeView.h"
#include "DlgBar.h"
#include "MainFrm.h"

#include "c:\Projects\KernelCAD\ThirdParty\OCCT\inc\Handle_TDocStd_Application.hxx"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#define IDC_KERNELCADCTRL   456475

IMPLEMENT_DYNCREATE(OcctBridgeView, CView)

BEGIN_MESSAGE_MAP(OcctBridgeView, CView)
	ON_COMMAND(ID_FILE_OPEN, &OcctBridgeView::OnFileOpen)
END_MESSAGE_MAP()

OcctBridgeView::OcctBridgeView()
{
	m_pDlgBar = NULL;
	m_param0LastCallBack = 0;
	m_param1LastCallBack = 0;
}

OcctBridgeView::~OcctBridgeView()
{
}

BEGIN_EVENTSINK_MAP(OcctBridgeView, CView)
END_EVENTSINK_MAP()

BOOL OcctBridgeView::PreCreateWindow(CREATESTRUCT& cs)
{
	return CView::PreCreateWindow(cs);
}

void OcctBridgeView::OnDraw(CDC* /*pDC*/)
{
	OcctBridgeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
}

#ifdef _DEBUG
void OcctBridgeView::AssertValid() const
{
	CView::AssertValid();
}
void OcctBridgeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
OcctBridgeDoc* OcctBridgeView::GetDocument() const // non-debug version is inline
{
	ASSERT(dynamic_cast<const OcctBridgeDoc*>(m_pDocument));
	return (OcctBridgeDoc*)m_pDocument;
}
#endif //_DEBUG

void OcctBridgeView::OnInitialUpdate() 
{
	CView::OnInitialUpdate();

	DWORD dwStyle = GetStyle();
	dwStyle = dwStyle | WS_CHILD;

	CRect rc;	GetClientRect( rc );
	BOOL bOK = m_DGKern.Create("DG Kernel", dwStyle, rc, this, 456475);				CH(bOK);

	m_DGKern.SetModelPath("Models\\Samples\\ShapeExplorer.mdg");
	m_DGKern.SetShowGlobalAxes(TRUE);

	Init();
}

void OcctBridgeView::Init() 
{
	if(!m_pDlgBar)
	{
		MainFrame* pMainFrame = (MainFrame*)AfxGetMainWnd();
		pMainFrame->OnInitView();
	}

	CH(m_pDlgBar);
	m_pDlgBar->Init();
}

void OcctBridgeView::UpdateView()
{
	m_DGKern.UpdateView();
}

void OcctBridgeView::OnFileOpen()
{
	CString strModelPath = m_DGKern.GetModelPath();

	CFileDialog dlg( TRUE, "mdg", strModelPath, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, 
			"Model Files (*.mdg)|*.mdg||");

	if(dlg.DoModal() != IDOK)
		return;

	strModelPath = dlg.GetPathName();	

	m_DGKern.SetModelPath(strModelPath);
}

IGlobalAPI_KC* OcctBridgeView::GetKcApi()
{
	IGlobalAPI_KC* iApi = NULL;

	if (m_pDlgBar && m_pDlgBar->m_bUseView)
	{
		IView* iView = (IView*)m_DGKern.GetView();
		iView->QueryInterface(IID_IGlobalAPI_KC, (void**)&iApi);	ASSERT(iApi);
		return iApi;
	}

	LPCLASSFACTORY pClf;
	HRESULT hr;
	// Use COM API call to Create Class Factory ( generic obejct constructor ) for KCAPI class
	if ((hr = ::CoGetClassObject(CLSID_KCGlobAPI, CLSCTX_INPROC_SERVER,
		NULL, IID_IClassFactory,
		(void **)&pClf)) != NOERROR)
	{
		TRACE("unable to find CLSID -- error = %x\n", hr);
		return NULL;
	}

	// Use the factory to create an object of Model class
	if (pClf->CreateInstance(NULL, IID_IGlobalAPI_KC, (void**)&iApi) != S_OK)
		return NULL;

	pClf->Release();
	return iApi;
}

void OcctBridgeView::OnCallBack(const char* operation, __int64 param0, __int64 param1)
{
	ASSERT(strcmp(operation, "OcctBridge_KC_Sample_Test_Callback") == 0);
	// Store parameters for check in DoTest()
	m_param0LastCallBack = param0;
	m_param1LastCallBack = param1;
}

// This whould be the application's way to receive calls from modified Ogre code
bool OcctToAppCallBack(__int64 implementationObj, const char* operation, __int64 param0, __int64 param1)
{
	ASSERT(implementationObj);
	OcctBridgeView* pOcctBridgeView = (OcctBridgeView*)implementationObj;
	pOcctBridgeView->OnCallBack(operation, param0, param1);
	return true;	// Return whatever your application needs
}

void OcctBridgeView::DoTest()
{
	IGlobalAPI_KC* iKcApi = GetKcApi();							CH(iKcApi);

	ITechnology_DG* iTechnology = NULL;
	iKcApi->GetTechnology("OCCT", &iTechnology);			CH(iTechnology);

	IView* iView = (IView*)m_DGKern.GetView();

	POSNT p = NULL;
	iTechnology->GetPointer(iView, "IView", "TDocStd_Application", &p);		CH(p);

	Handle_TDocStd_Application* pp = (Handle_TDocStd_Application*)p;
	Handle_TDocStd_Application hApp = *pp;

	iTechnology->SetTechnologyToAppCallback(OcctToAppCallBack, (__int64)this);

	// This is whatever you code on both sides. The call is passed straight to Ogre::Root::ExecuteDg(const String& operation, __int64 param0, __int64 param1)
	// The test implementation in OcctDgBridge::ExecuteDg(..), ThirdParty\OCCT\src\TDocStd\OcctDgBridge.cxx
	// will return number of documents in the application. Should be one.
	__int64 param0 = (__int64)&hApp;
	int nDocs = -1;
	__int64 param1 = (__int64)&nDocs;
	// Create a structure and pass its pointer if you need more parameters. param0 can be used to identify the type of structure in the case
	iTechnology->Execute("OcctBridge_KC_Sample_Test", param0, param1);		
	ASSERT((nDocs>=0));

	// Check call back worked
	ASSERT(m_param0LastCallBack == param0);
	ASSERT(m_param1LastCallBack == param1);

	IModel* iModel = (IModel*)m_DGKern.GetModel();
	ISection* iSect0 = NULL;
	iModel->GetSection(0, &iSect0);

	iTechnology->GetPointer(iSect0, "ISection", "TopoDS_Shape", &p);		CH(p);
	TopoDS_Shape& sh = *(TopoDS_Shape*)p;

	iTechnology->GetPointer(iSect0, "ISection", "AIS_Shape", &p);
	//AIS_Shape may not be available
	if (p)
	{
		AIS_Shape& shAis = *(AIS_Shape*)p;
	}

	ISection* iSection = NULL;
	iTechnology->GetInterface((POSNT)&sh, "TopoDS_Shape", "ISection", (IUnknown**)&iSection);		CH(iSection);

	ASSERT(iSection == iSect0);

	// Do something to check it is alive
	char nameSect[80];
	iSection->GetName(nameSect);

	ExtraTests(iTechnology);

	iSection->Release();
	iSect0->Release();
	iModel->Release();
	iKcApi->Release();
	iView->Release();
}

void OcctBridgeView::ExtraTests(ITechnology_DG* iTechnology)
{
	IView* iView = (IView*)m_DGKern.GetView();

	POSNT p = NULL;
	iTechnology->GetPointer(iView, "IView", "AIS_InteractiveContext", &p);		CH(p);

	Handle_AIS_InteractiveContext hAisCont = *(Handle_AIS_InteractiveContext*)p;

	iTechnology->GetPointer(iView, "IView", "V3d_Viewer", &p);		CH(p);

	Handle_V3d_Viewer hViewer = *(Handle_V3d_Viewer*)p;

	iTechnology->GetPointer(iView, "IView", "TDocStd_Document", &p);		CH(p);

	Handle_TDocStd_Document hDoc = *(Handle_TDocStd_Document*)p;

	iView->Release();
}
