
// MFC_0303View.cpp : CMFC_0303View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0303.h"
#endif

#include "MFC_0303Doc.h"
#include "MFC_0303View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0303View

IMPLEMENT_DYNCREATE(CMFC_0303View, CView)

BEGIN_MESSAGE_MAP(CMFC_0303View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC_0303View ����/����

CMFC_0303View::CMFC_0303View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC_0303View::~CMFC_0303View()
{
}

BOOL CMFC_0303View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0303View ����

void CMFC_0303View::OnDraw(CDC* pDC)
{
	CMFC_0303Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//��һ��
	/*CString s;
	s = _T("����***");

	int a = 1;
	CString A;
	A.Format(_T("%d"), a);

	pDC->TextOutW(100, 200, s);
	pDC->TextOutW(100, 300, A);*/

	//�ڶ���
	pDC->TextOutW(200, 200, pDoc->s);
	pDC->TextOutW(200, 300, pDoc->A);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0303View ���

#ifdef _DEBUG
void CMFC_0303View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0303View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0303Doc* CMFC_0303View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0303Doc)));
	return (CMFC_0303Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0303View ��Ϣ�������


void CMFC_0303View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC_0303Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->count += 1;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC_0303View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC_0303Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	CString num;
	num.Format(_T("%d"), pDoc->count);
	dc.TextOutW(100, 300, num);
	CView::OnRButtonDown(nFlags, point);
}
