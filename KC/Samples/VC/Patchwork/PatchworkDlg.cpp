// PatchworkDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Patchwork.h"
#include "PatchworkDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
// PatchworkDlg dialog
PatchworkDlg::PatchworkDlg(CWnd* pParent /*=NULL*/)
	: CDialog(PatchworkDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_iModel = NULL;
	m_iSurface = NULL;
	m_nElementType = 2;
	m_nBrowseAll = 0;
	for(BYTE i=0; i<3; i++)
	{
		m_iList[i] = NULL;
		m_iIterator[i] = NULL;
		m_iCurElem[i] = NULL;
		m_pos[i] = 0;
		m_nCount[i] = 0;
	}
	m_iGraphicItemPatch = NULL;
	m_iDraw = NULL;
	m_iStrip = NULL;
	m_nComponents = 0;
	m_nCurComponent = -1;
	m_nEdges = 0;
	m_nCurrentEdge = -1;	// A patche may not have edges at all
	m_nCurrentVertex = -1;	// Inside a patch number of vertices coinsides with number of edges
	m_iListVertCurEdge = NULL;
	m_nCurObject = 0;
	m_iSection = NULL;
	m_bParametricEdges = false;
	m_iGraphicItemEdge = NULL;
	m_iFrameEx = NULL;
	m_nObjectCount = 0;
	m_iArrEdgeComponents = NULL;
	m_bCurVertexValid = false;
	m_nPatchVertexCount = 0;
}

void PatchworkDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_KERNELCADCTRL1, m_DGKern);
	DDX_Radio(pDX, IDC_RB_TYPE_VERTEX, m_nElementType);
	DDX_Radio(pDX, IDC_RB_BROWSE_ALL, m_nBrowseAll);
	DDX_Text(pDX, IDC_TXT_PATCHES, m_nCount[2]);
	DDX_Text(pDX, IDC_TXT_EDGES, m_nCount[1]);
	DDX_Text(pDX, IDC_TXT_VERTICES, m_nCount[0]);
	DDX_Text(pDX, IDC_TXT_PATCH_EDGES, m_nEdges);
	DDX_Text(pDX, IDC_TXT_CUR_EDGE, m_nCurrentEdge);
	DDX_Text(pDX, IDC_TXT_CUR_VERTEX, m_nCurrentVertex);
	DDX_Text(pDX, IDC_TXT_PATCH_COMPONENTS, m_nComponents);
	DDX_Text(pDX, IDC_TXT_PATCH_CUR_COMP, m_nCurComponent);
	DDX_Text(pDX, IDC_TXT_TYPE, m_strSectType);
	DDX_Text(pDX, IDC_TXT_PATCH_VERTICES, m_nPatchVertexCount);
}

BEGIN_MESSAGE_MAP(PatchworkDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTT_PREV, &PatchworkDlg::OnPrevious)
	ON_BN_CLICKED(IDC_BUTT_NEXT, &PatchworkDlg::OnNext)
	ON_BN_CLICKED(IDC_RB_TYPE_EDGE, &PatchworkDlg::OnElemTypeChanged)
	ON_BN_CLICKED(IDC_RB_TYPE_PATCH, &PatchworkDlg::OnElemTypePatch)
	ON_BN_CLICKED(IDC_RB_TYPE_VERTEX, &PatchworkDlg::OnElemTypeVertex)
	ON_BN_CLICKED(IDC_RB_COMPONENT, OnElemTypeComponent)
	ON_BN_CLICKED(IDC_RB_BROWSE_ALL, &PatchworkDlg::OnBrowseAll)
	ON_BN_CLICKED(IDC_RB_BROWSE_PATCH, &PatchworkDlg::OnBrowsePatch)
	ON_COMMAND(ID_FILE_OPEN, OnFileOpen)
	ON_COMMAND(ID_FILE_EXIT, OnFileExit)
	ON_NOTIFY(UDN_DELTAPOS, IDC_SPIN_OBJECT, &PatchworkDlg::OnDeltaposSpinObject)
	ON_COMMAND(ID_HELP_SHOWTOPIC, OnHelp)
	ON_COMMAND(ID_MNU_FILE_SAVEAS, OnSaveAs)
	ON_WM_DESTROY()
END_MESSAGE_MAP()

BEGIN_EVENTSINK_MAP(PatchworkDlg, CDialog)
ON_EVENT(PatchworkDlg, IDC_KERNELCADCTRL1, 12, PatchworkDlg::OnClientDraw, VTS_NONE)
END_EVENTSINK_MAP()

// PatchworkDlg message handlers

BOOL PatchworkDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	InitModelInfo();

	m_DGKern.RequestClientDraw(TRUE);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void PatchworkDlg::InitModelInfo()
{
	ReleaseAll();

	m_iModel = (IModel*)m_DGKern.GetModel();

	m_iModel->QueryInterface(IID_IDraw, (void**)&m_iDraw);

	m_iModel->GetSectionCount(&m_nObjectCount);

	if( m_nCurObject >= m_nObjectCount )
		m_nCurObject = m_nObjectCount-1;

	CSpinButtonCtrl * pSpinCurLight =  (CSpinButtonCtrl*)GetDlgItem(IDC_SPIN_OBJECT);
	pSpinCurLight->SetRange( 0, m_nObjectCount-1 );

	UpdateObjectInfo();
}

// The current object has changed or different model loaded. Update relevant information
//
void PatchworkDlg::UpdateObjectInfo()
{
	if(m_iSection)
	{
		m_iSection->SetVisible(VARIANT_FALSE);		// Hide old object
		m_iSection->Release();
	}

	m_iModel->GetSection(m_nCurObject, &m_iSection);		ASSERT(m_iSection);

	// Detect type of the section. Will be used in OnClientDraw()
	m_bParametricEdges = false;
	char cType[30];						// Guaranteed not exceed the size
	m_iSection->GetSectionType(cType);
	m_strSectType = cType;
	if( strcmp(cType, "SORSection" ) == 0 )
		m_bParametricEdges = true;

	m_iSection->SetVisible(VARIANT_TRUE);			// Show new ibject

	m_iSection->QueryInterface(IID_ISurfaceT, (void**)&m_iSurface);			ASSERT(m_iSurface);	//Probably the first top section is not a mesh section

	m_iSurface->GetVertices(m_iList);
	m_iSurface->GetEdges(m_iList+1);
	m_iSurface->GetPatches(m_iList+2);

	for( BYTE i=0; i<3; i++)
	{
		m_iList[i]->GetIterator( m_iIterator+i );

		m_iIterator[i]->GetCount(m_nCount+i);

		m_iIterator[i]->GetHeadPosition(m_pos+i);
	}

	m_iSection->QueryInterface(IID_IFrameEx, (void**)&m_iFrameEx);

	UpdatePatchInfo();

	UpdatePage();
}

IGraphicItem* PatchworkDlg::GetGraphicItem(IUnknown* iInterface)
{
	CHN(iInterface);
	IView* iView = (IView*)m_DGKern.GetView();
	IObject_KC* iObject = NULL;
	iInterface->QueryInterface(IID_IObject_KC, (void**)&iObject);
	IGraphicItem* iGrItem = NULL;
	iView->GetGraphicItem(iObject, &iGrItem);
	iView->Release();
	iObject->Release();
	return iGrItem;
}

void PatchworkDlg::UpdatePatchInfo()
{
	ASSERT(m_pos[2] != 0 );
	RELEASE(m_iCurElem[2]);

	m_iList[2]->GetAt(m_pos[2], (void**)&m_iCurElem[2]);							ASSERT( m_iCurElem[2] != NULL );

	RELEASE(m_iGraphicItemPatch);
	//m_iCurElem[2]->QueryInterface(IID_IGraphicItem, (void**)&m_iGraphicItemPatch);		ASSERT(m_iGraphicItemPatch);
	// New way in v5 (unfortunately)
	m_iGraphicItemPatch = GetGraphicItem(m_iCurElem[2]);		ASSERT(m_iGraphicItemPatch);

	IPatch* iPatch = (IPatch*)m_iCurElem[2];	// The actual type

	// Get separate linked components. Normally a single component for a rectangle or equivalent patch
	// For a cylindrical surface with open ends there will be two components. A sphere has no components and no edges
	iPatch->GetEdgeComponents(&m_iArrEdgeComponents);				ASSERT(m_iArrEdgeComponents);

	m_iArrEdgeComponents->GetCount(&m_nComponents);				
	
	if( m_nComponents > 0 )
	{
		if( m_nCurComponent < 0 )
			m_nCurComponent = 0;
		else if( m_nCurComponent >= m_nComponents )
			m_nCurComponent = m_nComponents-1;
	}
	else
		m_nCurComponent = -1;

	UpdateEdgesInfo();

	UpdateCurrentVertexInfo();

	// Do not release iPatch because it is stored into m_iCurElem[2] iPatch is an unreferenced copy of it
	//iPatch->Release();
}

void PatchworkDlg::UpdateEdgesInfo()
{
	RELEASE(m_iStrip);
	// Get edges of the current component.
	VARIANT var;
	m_iArrEdgeComponents->GetAt(m_nCurComponent, &var);			ASSERT(var.vt == VT_UNKNOWN );		// Type must be IUnknown*
	IUnknown *iUnknown = var.punkVal; 
	iUnknown->QueryInterface( IID_IStrip, (void**)&m_iStrip);
	iUnknown->Release();

	ASSERT(m_iStrip);  if( !m_iStrip) return;

	m_iStrip->GetJointCount(&m_nEdges);

	m_nPatchVertexCount = m_nEdges;

	if( m_nEdges == 0 )
	{
		// Check for case a single closed element (like circle)
		VARIANT_BOOL bClosed;
		m_iStrip->IsClosed(&bClosed);
		if( bClosed )
			m_nEdges = 1;	// Empty strips are NOT closed. So this is a closed element

		m_nCurrentVertex = -1;
	}
	else
		m_nCurrentVertex = m_nCurrentEdge;

	m_nCurrentEdge = ( m_nEdges > 0 ? 0 : -1 );

	if( m_nElementType < 3 )
	{
		if( m_nCount[ m_nElementType ] == 0 )
		{
			// Case there ar eno elements of the selected type. Find any other
			for(m_nElementType=0; m_nElementType<3; m_nElementType++)
			{
				if( m_nCount[ m_nElementType ] > 0 )
					break;
			}

			if( m_nElementType == 3 )
				m_nElementType = 2;		// Did not find. Does not really matter. Just to keep in range
		}
	}

	UpdateCurrentEdgeInfo();

	UpdateData(FALSE);
}

void PatchworkDlg::UpdateCurrentVertexInfo()
{
	m_bCurVertexValid = false;
	IVertex* iVertex = NULL;

	if( m_nBrowseAll == 0 )
	{
		// Case browsing all edges in the surface independently of the current patch
		void* p;
		if( m_pos[0] == 0 )
			return;				// The list is empty. Surface has no vertices
		m_iList[0]->GetAt(m_pos[0], &p);

		iVertex = (IVertex*)p;
	}
	else
	{
		// Case browsing inside the current patch
		if( !m_iStrip )
			return;
		if( m_nCurrentVertex < 0 )
			return;

		IElement *pIElem = NULL;

		m_iStrip->GetElement( m_nCurrentVertex, VARIANT_FALSE, &pIElem);

		pIElem->QueryInterface(IID_IVertex, (void**)&iVertex);

		pIElem->Release();
	}

	if( !iVertex )
		return;

	GetPoint(iVertex, &m_curVertex);

	iVertex->Release();

	m_bCurVertexValid = true;
}

void PatchworkDlg::UpdateCurrentEdgeInfo()
{
	IKCLine* iKCLine = NULL;

	RELEASE(m_iListVertCurEdge);

	if( m_nBrowseAll == 0 )
	{
		// Case browsing all edges in the surface independently of the current patch
		void* p;
		m_iList[1]->GetAt(m_pos[1], &p);

		iKCLine = (IKCLine*)p;
	}
	else
	{
		// Case browsing inside the current patch
		if( !m_iStrip )
			return;
		if( m_nCurrentEdge < 0 )
			return;

		IElement *pIElem = NULL;

		m_iStrip->GetElement( m_nCurrentEdge, VARIANT_TRUE, &pIElem);

		pIElem->QueryInterface(IID_IKCLine, (void**)&iKCLine);
		pIElem->Release();
	}

	// Is the edge a loop (no ends or coinsiding ones)?
	VARIANT_BOOL closed;
	iKCLine->IsClosed(&closed);
	m_bClosed = closed == VARIANT_TRUE;

	if(m_bParametricEdges)
	{
		RELEASE(m_iGraphicItemEdge);
		//Old way. Should work too: iKCLine->QueryInterface( IID_IGraphicItem, (void**)&m_iGraphicItemEdge);
		m_iGraphicItemEdge = GetGraphicItem(iKCLine);
	}
	else
	{
		IVertex* iVertex;

		for(BYTE i=0; i<2; i++)
		{
			iKCLine->GetEnd(i, &iVertex);
			if( !iVertex )
				continue;							// Line may be closed and does not have ends
			GetPoint(iVertex, m_endsCurEdge + i);
			iVertex->Release();
		}

		RELEASE(m_iListVertCurEdge);
		// Get all vertices of the current edge to draw it. Ends only is not enough for curved lines
		iKCLine->QueryInterface( IID_IListT, (void**)&m_iListVertCurEdge);
	}

	if( m_nBrowseAll == 1 )
		UpdateCurrentVertexInfo();

	iKCLine->Release();
}

void PatchworkDlg::GetPoint(IVertex* iVertex, DIPoint* pPt)
{
	if(!iVertex)
		return;

	iVertex->GetVertexCoord( pPt->x, pPt->x+1, pPt->x+2 );

	// Internal geometry of an object is always expressed relative to the local frame of the object
	m_iFrameEx->ToGlobal( pPt );
}

void PatchworkDlg::OnClientDraw()
{
	m_iDraw->PushAttrib();    //Save the current color, point size  and line width (along with other attributes)

	if( m_iGraphicItemPatch )
	{
		m_iDraw->Color(1.0, 1.0, 0.0, 1.0);   // Yellow
		m_iGraphicItemPatch->Draw();
	}

	// Draw the current edge
	if( m_nBrowseAll == 0 || m_nCurrentEdge >= 0 )		//Some patches do not have any edges
	{
		m_iDraw->Color(1.0, 0.0, 0.0, 1.0);   // Set red  the current color (RGB and transparency)

		m_iDraw->LineWidth(2.0);

		if( m_bParametricEdges )
			m_iGraphicItemEdge->Draw();
		else
		{
			if( m_iListVertCurEdge )
			{
				if( m_bClosed )
					m_iDraw->Begin(eLineLoop);
				else
					m_iDraw->Begin(eLineStrip);
				
				IIteratorT* iIterator = NULL;

				m_iListVertCurEdge->GetIterator( &iIterator );

				INT_PTR pos;
				iIterator->GetHeadPosition(&pos);

				IVertex* iVertex;  DIPoint pt;	//double x,y,z;  
				while(pos)
				{
					m_iListVertCurEdge->GetAt(pos, (void**)&iVertex);

					iVertex->GetVertexCoord( pt.x , pt.x+1 , pt.x+2 );

					m_iFrameEx->ToGlobal( &pt );

					m_iDraw->Vertex( pt.x[0], pt.x[1], pt.x[2] );

					iVertex->Release();

					iIterator->GetNext(&pos);
				}

				iIterator->Release();
			}
			else
			{
				m_iDraw->Begin(eLines);

				// Case there is something wrong with the internal vertex list. Assume the edge is a straight line
				m_iDraw->Vertex(m_endsCurEdge[0].x[0], m_endsCurEdge[0].x[1], m_endsCurEdge[0].x[2]);
				m_iDraw->Vertex(m_endsCurEdge[1].x[0], m_endsCurEdge[1].x[1], m_endsCurEdge[1].x[2]);
			}
		}

		m_iDraw->End();
	}

	// The current vertex
	if( m_bCurVertexValid )
	{
		m_iDraw->PointSize(8);

		m_iDraw->Color(0.0, 0.0, 1.0, 1.0);		// Blue

		m_iDraw->Begin( ePoints );
			m_iDraw->Vertex(m_curVertex.x[0], m_curVertex.x[1], m_curVertex.x[2]);
		m_iDraw->End();
	}
	
	m_iDraw->PopAttrib();
}

void PatchworkDlg::OnPrevious()
{
	OnNext(false);
}

void PatchworkDlg::OnNext()
{
	OnNext(true);
}

void PatchworkDlg::OnNext(bool bNext)
{
	if( m_nElementType < 3 )
		RELEASE( m_iCurElem[m_nElementType] );

	if( m_nElementType == 2 )
		RELEASE( m_iGraphicItemPatch );

	if( m_nBrowseAll == 0 || m_nElementType==2 )	// Browse all or patches?
	{
		if(bNext)
			m_iIterator[m_nElementType]->GetNext(m_pos + m_nElementType);
		else
			m_iIterator[m_nElementType]->GetPrev(m_pos + m_nElementType);
	}

	if( m_nElementType == 0 )
	{
		if( m_nBrowseAll == 1 )						//Browse the patch?
			m_nCurrentVertex += ( bNext ? 1 : -1 );
		UpdateCurrentVertexInfo();
	}
	else if( m_nElementType == 1 )
	{
		if( m_nBrowseAll == 1 )						//Browse the patch?
			m_nCurrentEdge += ( bNext ? 1 : -1 );
		UpdateCurrentEdgeInfo();
	}
	else if( m_nElementType == 2 )
	{
		UpdatePatchInfo();
	}
	else if( m_nElementType == 3 )
	{
		ASSERT( m_nBrowseAll == 1 );				// Must be enabled only for browing inside the current patch
		m_nCurComponent += ( bNext ? 1 : -1 );
		m_nCurrentEdge = 0;
		UpdateEdgesInfo();
	}

	m_DGKern.UpdateView();
	UpdatePage();
}

// Enable/Disable controls
void PatchworkDlg::UpdatePage()
{
	BOOL bEnablePrevious, bEnableNext;

	if( m_nBrowseAll == 0 || m_nElementType == 2 )	// patches
	{
		if(  m_nElementType == 3 )	// COmponents
		{
			bEnablePrevious = m_nCurComponent > 0;
		}
		else
		{
			INT_PTR posnHead;
			m_iIterator[m_nElementType]->GetHeadPosition(&posnHead);

			bEnablePrevious = m_pos[m_nElementType] != posnHead;
		}
	}
	else
	{
		if( m_nElementType == 1 )				// Edges?
			bEnablePrevious = m_nCurrentEdge > 0;
		else if( m_nElementType == 3 )				// components?
			bEnablePrevious = m_nCurComponent > 0;
		else
			bEnablePrevious = m_nCurrentVertex > 0;
	}

	GetDlgItem(IDC_BUTT_PREV)->EnableWindow(bEnablePrevious);

	if( m_nBrowseAll == 0 || m_nElementType == 2 )	// patches
	{
		if(  m_nElementType == 3 )	// COmponents
		{
			bEnableNext = m_nCurComponent < m_nComponents-1;
		}
		else
		{
			INT_PTR posnTail;
			m_iIterator[m_nElementType]->GetTailPosition(&posnTail);

			bEnableNext = m_pos[m_nElementType] != posnTail;
		}
	}
	else
	{
		if( m_nElementType == 1 )				// Edges?
			bEnableNext = m_nCurrentEdge < m_nEdges-1;
		else if( m_nElementType == 3 )				// components?
			bEnableNext = m_nCurComponent < m_nComponents-1;
		else
			bEnableNext = m_nCurrentVertex < m_nEdges-1;
	}

	GetDlgItem(IDC_BUTT_NEXT)->EnableWindow(bEnableNext);

	BOOL bEnableBrowseGroup = m_nElementType != 2;

	GetDlgItem(IDC_RB_TYPE_VERTEX)->EnableWindow(m_nCount[0]>0);

	bool bEnableBrowseAllGroup = bEnableBrowseGroup && m_nElementType != 3;		// Component list is available only per patch

	GetDlgItem(IDC_RB_BROWSE_ALL)->EnableWindow(bEnableBrowseAllGroup);
	GetDlgItem(IDC_RB_BROWSE_PATCH)->EnableWindow(bEnableBrowseAllGroup);
	GetDlgItem(IDC_GROUP_BROWSE)->EnableWindow(bEnableBrowseAllGroup);

	if( bEnableBrowseGroup )
	{
		if( m_nElementType == 0 )
			GetDlgItem(IDC_GROUP_BROWSE)->SetWindowText("Browse Vertices");
		else if( m_nElementType == 1 || m_nElementType == 3 )
			GetDlgItem(IDC_GROUP_BROWSE)->SetWindowText("Browse Edges");
	}

	UpdateData(FALSE);
}

void PatchworkDlg::OnElemTypeChanged()
{
	UpdateData();
	UpdatePage();
}

void PatchworkDlg::OnElemTypePatch()
{
	OnElemTypeChanged();
}

void PatchworkDlg::OnElemTypeComponent()
{
	m_nElementType = 3;

	if( m_nBrowseAll == 0 )
	{
		m_nBrowseAll = 1;		// Component list is available only per patch
		UpdatePage();
	}
	else
		OnElemTypeChanged();
}

void PatchworkDlg::OnElemTypeVertex()
{
	OnElemTypeChanged();
}

void PatchworkDlg::OnBrowseAll()
{
	m_nBrowseAll = 0;
	UpdatePage();
}

void PatchworkDlg::OnBrowsePatch()
{
	m_nBrowseAll = 1;
	UpdateEdgesInfo();
	m_DGKern.UpdateView();
	UpdatePage();
}

void PatchworkDlg::OnFileOpen() 
{
	CString strModelPath = m_DGKern.GetModelPath();

	CFileDialog dlg( TRUE, "mdg", strModelPath, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, 
			"Model Files (*.mdg)|*.mdg|KernelCAD Models (*.glm)|*.glm||");

	if(dlg.DoModal() != IDOK)
		return;

	strModelPath = dlg.GetPathName();	

	m_DGKern.SetModelPath(strModelPath);

	InitModelInfo();
//	Invalidate(FALSE);
//	UpdateWindow();
}

void PatchworkDlg::OnSaveAs()
{
	CString strModelPath = m_DGKern.GetModelPath();
	CFileDialog dlg(FALSE, "mdg", strModelPath, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, "Model Files (*.mdg)|*.mdg|KernelCAD Models (*.glm)|*.glm||");
	if (dlg.DoModal() != IDOK)
		return;
	strModelPath = dlg.GetPathName();
	m_DGKern.SaveAs(strModelPath);
}

void PatchworkDlg::OnFileExit() 
{
	OnOK();	
}

void PatchworkDlg::OnDeltaposSpinObject(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
	
	if( (m_nCurObject==0)&&(pNMUpDown->iDelta<0) || (m_nCurObject==m_nObjectCount-1)&&(pNMUpDown->iDelta>0) )
	{
		*pResult = 1;
		return;
	}

	m_nCurObject += pNMUpDown->iDelta;

	UpdateObjectInfo();

	m_DGKern.UpdateView();

	*pResult = 0;
}

void PatchworkDlg::OnDestroy()
{
	ReleaseAll();

	CDialog::OnDestroy();
}

void PatchworkDlg::ReleaseAll()
{
	for( BYTE i=0; i<3; i++)
	{
		RELEASE(m_iCurElem[i]);
		RELEASE(m_iList[i]);
		RELEASE(m_iIterator[i]);
	}

	RELEASE(m_iListVertCurEdge);
	RELEASE(m_iGraphicItemEdge);
	RELEASE(m_iStrip);
	RELEASE(m_iGraphicItemPatch);
	RELEASE(m_iArrEdgeComponents);
	RELEASE(m_iDraw);
	RELEASE(m_iSurface);
	RELEASE(m_iFrameEx);
	RELEASE(m_iSection);
	RELEASE(m_iModel);
}

void PatchworkDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
//		CAboutDlg dlgAbout;
//		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void PatchworkDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}
// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR PatchworkDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void PatchworkDlg::OnHelp()
{
	DIHelp help("Samples/Patchwork.aspx");	
}