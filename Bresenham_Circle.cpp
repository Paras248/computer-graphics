#include<stdio.h>
#include<iostream>
#include<graphics.h>
#include<conio.h>

int xmax,ymax,xmid,ymid;
void axis()
{
  cleardevice;
  line(xmid,0,xmid,ymax);
  line(0,ymid,xmax,ymid);
}
int x=0,r,y=r,D,limit=0,d,d1;

void mh()
{
  x=x+1;
  D=D+2*x+1;
}
void md()
{
  x=x+1;
  y=y-1;
  D=D+2*x-2*y+2;
}
void mv()
{
  y=y-1;
  D=D-2*y+1;
}
int main()
{
 int gd=DETECT,gm;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 xmax=getmaxx();
 ymax=getmaxy();
 xmid=xmax/2;
 ymid=ymax/2;
 axis();
 printf("\nEnter radius : ");
 scanf("%d",&r);
 y=r;
 D=2*(1-r);
 while(y>=limit)
 {
	putpixel(xmid+x,ymid-y,10);
	putpixel(xmid-x,ymid-y,10);
	putpixel(xmid+x,ymid+y,10);
	putpixel(xmid-x,ymid+y,10);
	delay(100);
	if(D<=0)
	{
		d=2*D+2*y-1;
		if(d<=0)
		{
			mh();
		}
		else
		{
			md();
		}
	}
	else if(D>0)
	{
		d1=2*D-2*x-1;
		if(d1<=0)
		{
			md();
		}
		else
		{
			mv();
		}
	}
	else if(D==0)
	{
		md();
	}

 }
 getch();
 closegraph();
 return 0;
 }
