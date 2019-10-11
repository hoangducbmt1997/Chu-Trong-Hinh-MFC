#include "stdafx.h"
#include "khungchu.h"

void khungchu::thietlap(int mx1,int my1,int mx2,int my2)
{
	x1=mx1;y1=my1;x2=mx2;y2=my2;
}
void khungchu::ve(CClientDC *pDC)
{
	pDC->Rectangle(x1,y1,x2,y2);
}
khungchu::khungchu(void)
{
}
khungchu::~khungchu(void)
{
}
