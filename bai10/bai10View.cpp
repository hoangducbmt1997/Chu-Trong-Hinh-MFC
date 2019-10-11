
// bai10View.cpp : implementation of the Cbai10View class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "bai10.h"
#endif

#include "bai10Doc.h"
#include "bai10View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cbai10View

IMPLEMENT_DYNCREATE(Cbai10View, CView)

BEGIN_MESSAGE_MAP(Cbai10View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// Cbai10View construction/destruction

Cbai10View::Cbai10View()
{
	// TODO: add construction code here
	khungchu1.thietlap(300,100,400,200);
	ch="A";
}

Cbai10View::~Cbai10View()
{
}

BOOL Cbai10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// Cbai10View drawing

void Cbai10View::OnDraw(CDC* /*pDC*/)
{
	Cbai10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC pDC(this);
	khungchu1.ve(&pDC);
	pDC.TextOutW(345,140,ch);
	// TODO: add draw code for native data here
}


// Cbai10View printing

BOOL Cbai10View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void Cbai10View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void Cbai10View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// Cbai10View diagnostics

#ifdef _DEBUG
void Cbai10View::AssertValid() const
{
	CView::AssertValid();
}

void Cbai10View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cbai10Doc* Cbai10View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cbai10Doc)));
	return (Cbai10Doc*)m_pDocument;
}
#endif //_DEBUG


// Cbai10View message handlers


void Cbai10View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	int keynumber;
	// TODO: Add your message handler code here and/or call default
	keynumber=nChar;
	CClientDC pDC(this);
	keychar=(char)keynumber;
	pDC.Rectangle(300,100,400,200);
	pDC.TextOutW(345,140,keychar);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
