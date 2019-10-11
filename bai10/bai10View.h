
// bai10View.h : interface of the Cbai10View class
//

#pragma once
#include"khungchu.h"

class Cbai10View : public CView
{
protected: // create from serialization only
	Cbai10View();
	DECLARE_DYNCREATE(Cbai10View)

// Attributes
public:
	Cbai10Doc* GetDocument() const;

// Operations
public:
	khungchu khungchu1;
	CString ch,keychar;
// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~Cbai10View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // debug version in bai10View.cpp
inline Cbai10Doc* Cbai10View::GetDocument() const
   { return reinterpret_cast<Cbai10Doc*>(m_pDocument); }
#endif

