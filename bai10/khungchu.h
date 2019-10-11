#pragma once
class khungchu
{
private:
	int x1,x2,y1,y2;
public:
	khungchu(void);
	void thietlap(int mx1,int my1,int mx2,int my2);
	void ve(CClientDC *pDC);
	~khungchu(void);
};

