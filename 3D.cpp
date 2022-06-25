#include<graphics.h>
#include<math.h>

int main()
{

    int gd = DETECT, gm;
    initgraph(&gd,&gm,(char *)"");
    int x,y,z,ch,left, top, right, bottom, depth = 15;

    printf("\nEnter top left x :");
    scanf("%d",&left);

    printf("\nEnter top left y :");
    scanf("%d",&top);

    printf("\nEnter bottom right x :");
    scanf("%d",&right);

    printf("\nEnter bottom right y :");
    scanf("%d",&bottom);

    bar3d(left, top, right, bottom, depth, 1);

    system("cls");
    printf("\n1. Translate  2. Scaling");
    printf("\nEnter choice :");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        {
            printf("\nEnter tx & ty :");
            scanf("%d%d",&x,&y);

            bar3d(left+x, top+y, right+x, bottom+y, depth, 1);
            break;
        }
        case 2:{
                    printf("\nEnter sx sy sz :");
                    scanf("%d%d%d",&x,&y,&z);

                    bar3d(left*x, top*y, right*x, bottom*y, depth*z, 1);
                    break;

                }

        default:printf("\nInvalid Choice!!!!");
        break;
    }





    getch();
    closegraph();
    return 0;
}
