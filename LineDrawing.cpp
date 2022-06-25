#include <iostream>
#include <math.h>
#include <graphics.h>

using namespace std;


int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    float x1,x2,y1,y2;
    float dx, dy;
    float xinc, yinc;
    float step;
    cout << "========= Enter starting points of the line =========" << endl;
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;

    dx = x2 - x1;
    dy = y2 - y1;

    step = max(dx, dy);

    xinc = dx / step;
    yinc = dy / step;

    while(x1 <= x2 || y1 <= y2){
        delay(500);
        putpixel(x1,y1, 13);
        x1 += xinc;
        y1 += yinc;
    }
    getch();
    closegraph();
    return 0;
}
