
// MFC_0303View.cpp : CMFC_0303View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
END_MESSAGE_MAP()

// CMFC_0303View 构造/析构

CMFC_0303View::CMFC_0303View()
{
	// TODO: 在此处添加构造代码

}

CMFC_0303View::~CMFC_0303View()
{
}

BOOL CMFC_0303View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC_0303View 绘制

void CMFC_0303View::OnDraw(CDC* /*pDC*/)
{
	CMFC_0303Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC_0303View 诊断

#ifdef _DEBUG
void CMFC_0303View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0303View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0303Doc* CMFC_0303View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0303Doc)));
	return (CMFC_0303Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0303View 消息处理程序
