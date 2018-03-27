#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    /*x1,y1 top left rectangle1 - x2,y2 bot right rectangle1 - x3, y3 top left rectangle2 - x4, y4 bot right rectangle2*/
    printf("enter the rectangle1's top left coordinates(format(x y)):\n");
    scanf("%d %d", &x1, &y1);
    printf("enter the rectangle1's bot right coordinates(format(x y)):\n");
    scanf("%d %d", &x2, &y2);
    printf("enter the rectangle2's top left coordinates(format(x y)):\n");
    scanf("%d %d", &x3, &y3);
    printf("enter the rectangle2's bot right coordinates(format(x y)):\n");
    scanf("%d %d", &x4, &y4);

    if ((((x1>x3 && x3>x2) || (x2>x3 && x3>x1)) && ((y1>y3 && y3>y2) || (y2>y3 && y3>y1))) || (((x1>x4 && x4>x2) || (x2>x4 && x4>x1)) && ((y1>y4 && y4>y2) || (y2>y4 && y4>y1))))
        printf("rectangles overlap");

    else
        printf("Rectangles do not overlap");

    return 0;
}
