//Name-Chinmay M. Patil         Roll No-B39         PRN-2021000491

#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gdriver=DETECT,gmode,i;
    double maxx,maxy,midx,midy,left,right,top,bottom,depth,q,p,x1,y1,x2,y2;
    char path[50]="0";
    initgraph(&gdriver,&gmode,path);
    maxx=getmaxx();
    maxy=getmaxy();
    midx=maxx/2;
    midy=maxy/2;
    setcolor(WHITE);
    line(getmaxx()/2,0,getmaxx()/2,getmaxy());
    line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
    cout<<"Enter top-left co-ordinates of cuboid\n";
    cout<<"x1 - ";cin>>left;
    cout<<"y1 - ";cin>>top;
    cout<<"Enter bottom-right co-ordinates of cuboid\n";
    cout<<"x2 - ";cin>>right;
    cout<<"y2 - ";cin>>bottom;
    cout<<"Enter depth of cuboid - ";cin>>depth;
    bar3d(midx+left,midy-top,midx+right,midy-bottom,depth,1);
    setcolor(YELLOW);
    next:
    cout<<"1 - Scaling\n2 - Translation\n : ";
    cin>>i;
    switch(i)
    {
      case 1:
        cout<<"\nEnter scaling factor: ";
        cin>>q;
        cout<<"\n After scaling\n";
        bar3d(midx+(q*left),midy-(q*top),midx+(q*right),midy-(q*bottom),10*q,1);
        break;
      case 2:
        cout<<" Enter translation co-ordinates. : ";
        cout<<"\nx - "; cin>>q;
        cout<<"y - "; cin>>p;
        cout<<"\n After translation.\n";
        bar3d(midx+left+q,midy-(top+p),midx+right+q,midy-(bottom+p),depth,1);
        break;
      default:
        return 0;
    }
    goto next;
    closegraph();
    return 0;
}
