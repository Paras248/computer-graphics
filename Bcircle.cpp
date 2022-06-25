#include<stdio.h>
#include<graphics.h>
int main()
{
        int gd=DETECT,gm,color;
        initgraph(&gd,&gm," ");

        int x = 0,y,p,xc,yc;

        xc = getmaxx()/2;
        yc = getmaxy()/2;



        printf("enter radius=");
        scanf("%d",&y);

        p=3-(2*y);
        printf("decision parameter=%d",p);
        while(x<=y)
        {
            delay(100);
            putpixel(xc+x,yc+y,10);
            putpixel(xc+x,yc-y,10);
            putpixel(xc-x,yc+y,10);
            putpixel(xc-x,yc-y,10);
            putpixel(xc+y,yc+x,10);
            putpixel(xc-y,yc+x,10);
            putpixel(xc+y,yc-x,10);
            putpixel(xc-y,yc-x,10);
            putpixel(xc,yc,10);

            if(p<0)
            {
                x=x+1;
                y=y;
                p=p+(4*x)+6;

            }
            else{
                x=x+1;
                y=y-1;
                p=p+(4*(x-y))+10;
            }
        }
        getch();
        closegraph();

}
