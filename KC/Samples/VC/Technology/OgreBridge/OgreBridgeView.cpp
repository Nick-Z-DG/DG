// OgreBridgeView.cpp : implementation of the OgreBridgeView class
#include "stdafx.h"
#include "OgreBridge.h"
#include "OgreBridgeDoc.h"
#include "OgreBridgeView.h"
#include "DlgBar.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#define IDC_KERNELCADCTRL   456475

IMPLEMENT_DYNCREATE(OgreBridgeView, CView)

BEGIN_MESSAGE_MAP(OgreBridgeView, CView)
	ON_COMMAND(ID_FILE_OPEN, &OgreBridgeView::OnFileOpen)
END_MESSAGE_MAP()

OgreBridgeView::OgreBridgeView()
{
	m_pDlgBar = NULL;
	m_pRoot = NULL;
}

OgreBridgeView::~OgreBridgeView()
{
}

BEGIN_EVENTSINK_MAP(OgreBridgeView, CView)
END_EVENTSINK_MAP()

BOOL OgreBridgeView::PreCreateWindow(CREATESTRUCT& cs)
{
	return CView::PreCreateWindow(cs);
}

void OgreBridgeView::OnDraw(CDC* /*pDC*/)
{
	OgreBridgeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
}

#ifdef _DEBUG
void OgreBridgeView::AssertValid() const
{
	CView::AssertValid();
}
void OgreBridgeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
OgreBridgeDoc* OgreBridgeView::GetDocument() const // non-debug version is inline
{
	ASSERT(dynamic_cast<const OgreBridgeDoc*>(m_pDocument));
	return (OgreBridgeDoc*)m_pDocument;
}
#endif //_DEBUG

void OgreBridgeView::OnInitialUpdate() 
{
	CView::OnInitialUpdate();

	DWORD dwStyle = GetStyle();
	dwStyle = dwStyle | WS_CHILD;

	CRect rc;	GetClientRect( rc );
	BOOL bOK = m_DGKern.Create("DG Kernel", dwStyle, rc, this, 456475);				CH(bOK);

	m_DGKern.SetModelPath("Models\\Light.glm");
	m_DGKern.SetShowGlobalAxes(TRUE);

	Init();
}

void OgreBridgeView::Init() 
{
	if(!m_pDlgBar)
	{
		MainFrame* pMainFrame = (MainFrame*)AfxGetMainWnd();
		pMainFrame->OnInitView();
	}

	CH(m_pDlgBar);
	m_pDlgBar->Init();
}

void OgreBridgeView::UpdateView()
{
	m_DGKern.UpdateView();
}

void OgreBridgeView::OnFileOpen()
{
	CString strModelPath = m_DGKern.GetModelPath();

	CFileDialog dlg( TRUE, "glm", strModelPath, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, 
			"Model Files (*.glm)|*.glm||");

	if(dlg.DoModal() != IDOK)
		return;

	strModelPath = dlg.GetPathName();	

	m_DGKern.SetModelPath(strModelPath);
}

IGlobalAPI_KC* OgreBridgeView::GetKcApi()
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

// This whould be the application's way to receive calls from modified Ogre code
bool OgreToAppCallBack(__int64 implementationObj, const char* operation, __int64 param0, __int64 param1)
{
	ASSERT(implementationObj);
	OgreBridgeView* pOgreBridgeView = (OgreBridgeView*)implementationObj;
	pOgreBridgeView->OnCallBack(operation, param0, param1);
	return true;	// Return whatever your application needs
}

void OgreBridgeView::OnCallBack(const char* operation, __int64 param0, __int64 param1)
{
	ASSERT(strcmp(operation, "OgreBridge_KC_Sample_Test_Callback") == 0);
	ASSERT(m_pRoot == (Ogre::Root*)param0);
}

void OgreBridgeView::DoTest()
{
	IGlobalAPI_KC* iKcApi = GetKcApi();							CH(iKcApi);

	ITechnology_DG* iTechnology = NULL;
	iKcApi->GetTechnology("Ogre", &iTechnology);			CH(iTechnology);

	POSNT pRoot = NULL;
	iTechnology->GetGlobalObjectPointer("Root", &pRoot);		CH(pRoot);

	m_pRoot = (Ogre::Root*)pRoot;

	IView* iView = (IView*)m_DGKern.GetView();

	POSNT pSceneMgr = NULL;
	iTechnology->GetPointer(iView, "IView", "SceneManager", &pSceneMgr);		CH(pSceneMgr);

	iTechnology->SetTechnologyToAppCallback(OgreToAppCallBack, (__int64)this);

	// This is whatever you code on both sides. The call is passed straight to Ogre::Root::ExecuteDg(const String& operation, __int64 param0, __int64 param1)
	// We we will query a SceneNode pointer of the last child of the root node
	// This is the test case implemented in Ogre::Root::ExecuteDg(..)
	Ogre::SceneNode* sceneNode = NULL;
	__int64 param0 = (__int64)pSceneMgr;
	__int64 param1 = (__int64)&sceneNode;
	// Create a structure and pass its pointer if you need more parameters. param0 can be used to identify the type of structure in the case
	iTechnology->Execute("OgreBridge_KC_Sample_Test", param0, param1);		CH(sceneNode);

	// Get KC section which is presented with sceneNode
	ISection* iSection = NULL;
	iTechnology->GetInterface((POSNT)sceneNode, "SceneNode", "ISection", (IUnknown**)&iSection);		CH(iSection);

	// Do somethgn with it
	char nameSect[80];
	iSection->GetName(nameSect);

	// The reverse ISection to Ogre scene nodes is not available by default as KC sections can be displyed in several views
	// If required, create a view-specific map by doing the above for all sections in the model (query flat section array)
}
