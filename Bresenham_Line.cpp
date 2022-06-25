#include<stdio.h>
#include<graphics.h>
void breseham(int,int,int,int);
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,0);
    int x1,y1,x2,y2,ch;
    printf("\n Would you like to start? :Enter 1 or 0 \n");
    scanf("%d",&ch);
    while(ch==1)
    {
       printf("\n Enter x1:");
       scanf("%d",&x1);
       printf("\n Enter y1:");
       scanf("%d",&y1);
       printf("\n Enter x2:");
       scanf("%d",&x2);
       printf("\n Enter y2:");
       scanf("%d",&y2);

       breseham(x1,y1,x2,y2);

       printf("Do you want to continue ? :Enter 1 or 0 \n");
       scanf("%d",&ch);
    }


    getch();
    closegraph();
    return 0;

}
void breseham(int x1,int y1,int x2,int y2)
{

    int e,dx,dy,x,y,temp,i;
    x=x1;
    y=y1;
    dx=x2-x1;
    dy=y2-y1;
    e=2*dx-dy;

    if(dy>dx)
    {
        temp=dy;
        dy=dx;
        dx=temp;
    }
    for(i=0;i<=dx;i++)
    {
        putpixel(x,y,WHITE);
        delay(100);
        while(e>0)
        {
            y=y+1;
            e=e-2*dx;
        }
        x=x+1;
        e=e+2*dy;
    }
}
