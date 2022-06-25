#include<graphics.h>

int main(){

    int gd = DETECT, gm;

    int x1, y1, x2, y2, dx, dy, p, m;

    initgraph(&gd,&gm,(char*)"");

    printf("\n Enter x1 :");
    scanf("%d",&x1);
    printf("\n Enter y1 :");
    scanf("%d",&y1);
    printf("\n Enter x2 :");
    scanf("%d",&x2);
    printf("\n Enter y2 :");
    scanf("%d",&y2);

    dx = x2 - x1;
    dy = y2 - y1;
    m = dy/dx;

    p = (2 * dy) - dx;

    if(m < 1){
        while(x1 <= x2){
            delay(100);
            putpixel(x1,y1,15);
            if(p < 0){
                x1 += 1;
                y1 = y1;
                p += 2 * dy;
            }
            else{
                x1 += 1;
                y1 += 1;
                p += (2 * dy) - (2 * dx);
            }
        }
    }

    getch();
    closegraph();
    return 0;
}
