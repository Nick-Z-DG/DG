// DlgBar.cpp : implementation file
#include "stdafx.h"
#include "OcctBridge.h"
#include "DlgBar.h"
#include "OcctBridgeDoc.h"
#include "OcctBridgeView.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

DlgBar::DlgBar(CWnd* pParent /*=NULL*/)
{
	m_pView = NULL;
	m_bUseView = TRUE;
}

BEGIN_MESSAGE_MAP(DlgBar, CDialogBar)
	ON_COMMAND(IDC_TEST, OnTest)
	ON_BN_CLICKED(IDC_TEST_VIEW, OnTestView)
	ON_BN_CLICKED(IDC_TEST_COM, OnTestCOM)
END_MESSAGE_MAP()

void DlgBar::OnTestView()
{
	m_bUseView = TRUE;
}

void DlgBar::OnTestCOM()
{
	m_bUseView = FALSE;
}

void DlgBar::OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar) 
{
	CDialogBar::OnVScroll(nSBCode, nPos, pScrollBar);
}

BOOL DlgBar::Create( CWnd* pParentWnd, UINT nIDTemplate, UINT nStyle, UINT nID ) 
{
	m_pParent = pParentWnd;

	BOOL bOK = CDialogBar::Create( pParentWnd, nIDTemplate, nStyle | WS_CHILD, nID );

	// default value corresponding to m_refineType
	if (bOK == 1)
	{
		CButton* pButt = (CButton*)GetDlgItem(IDC_TEST_VIEW);		ASSERT(pButt);
		if (pButt)
			pButt->SetCheck(1);
	}

	//UpdatePage();
	return bOK;
}

void DlgBar::UpdatePage()
{
//	DisplayNumber(IDC_EDIT_MOVE_BY, m_dMoveBy);
}

// Called from void OcctBridgeView::Init() 
void DlgBar::Init()
{
	GetViewRef();
	UpdatePage();
}

// DataExchange does nto work for Dlgbars so do it manually
void DlgBar::DisplayNumber(UINT idControl, double numb)
{
	CWnd* pWnd = GetDlgItem(idControl);
	CString str;
	str.Format("%.4f", numb);
	pWnd->SetWindowTextA(str);
	pWnd->Invalidate();
	pWnd->UpdateWindow();
}

void DlgBar::DisplayInteger(UINT idControl, int numb)
{
	CWnd* pWnd = GetDlgItem(idControl);
	CString str;
	str.Format("%d", numb);
	pWnd->SetWindowTextA(str);
	pWnd->Invalidate();
	pWnd->UpdateWindow();
}

double DlgBar::ReadNumber(UINT idControl)
{
	CWnd* pWnd = GetDlgItem(idControl);
	CString str;
	pWnd->GetWindowText(str);
	LPCSTR szNum = str.GetBuffer( str.GetLength() );
	double numb = 0;
	sscanf_s( szNum, "%lf", &numb );
	return numb;
}

MainFrame* DlgBar::GetMainFrame()
{
	ASSERT(m_pParent && dynamic_cast<const MainFrame*>(m_pParent));
	return (MainFrame*)m_pParent;
}

void DlgBar::GetViewRef()
{
	if(m_pView)
		return;
	MainFrame* pMainFrame = GetMainFrame();
	m_pView = (OcctBridgeView*)pMainFrame->GetActiveView();
	if(!m_pView)
		return;
	ASSERT(m_pView && dynamic_cast<const OcctBridgeView*>(m_pView));
}

void DlgBar::OnUpdateCmdUI(CFrameWnd* pTarget, BOOL bDisableIfNoHndler)
{
	bDisableIfNoHndler = FALSE;
	CDialogBar::OnUpdateCmdUI(pTarget,bDisableIfNoHndler);
}

void DlgBar::OnTest()
{
	if (!m_pView)
		return;
	m_pView->DoTest();
}

