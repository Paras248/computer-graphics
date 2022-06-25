#include <iostream>
#include <graphics.h>

using namespace std;

int x1,y1,x2,y2;
int tx1,ty1, tx2,ty2;
int tranformation_x, tranformation_y;

void translation();
void scaling();

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int choice;

        cout << "Enter x1: ";
        cin >> x1;

        cout << "Enter y1: ";
        cin >> y1;

        cout << "Enter x2: ";
        cin >> x2;

        cout << "Enter y2: ";
        cin >> y2;

        cout << "Enter tranformation with respect to x-axis: ";
        cin >> tranformation_x;

        cout << "Enter tranformation with respect to y-axis: ";
        cin >> tranformation_y;

        cout << " *** Before Transformation *** ";

        line(x1,y1,x2,y2);

        cout << endl << "================ 2D TRANSFORMATION OF LINE ================" << endl;
        cout << "1.Translation" << endl << "2.Scaling" << endl << "Enter your choice: ";
        cin >> choice;


        switch(choice){
            case 1: {
                translation();
                break;
            }
            case 2: {
                scaling();
                break;
            }
            default:
                cout << "Invalid choice!!!";
                break;
        }


    getch();
    closegraph();
    return 0;
}

void translation(){
    tx1 = x1 + tranformation_x;
    ty1 = y1 + tranformation_y;
    tx2 = x2 + tranformation_x;
    ty2 = y2 + tranformation_y;

    line(tx1,ty1,tx2,ty2);
}

void scaling(){
    tx1 = x1 * tranformation_x;
    ty1 = y1 * tranformation_y;
    tx2 = x2 * tranformation_x;
    ty2 = y2 * tranformation_y;

    line(tx1,ty1,tx2,ty2);
}
