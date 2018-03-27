#include <stdio.h>
int main()
{
    int x,y,z,sum;
    float average;
    printf("enter three number (x, y, z):\n* ");
    scanf("%d", &x);
    printf("* ");
    scanf("%d", &y);
    printf("* ");
    scanf("%d", &z);
    sum = x + y + z;
    average = sum / 3;
    printf("sum: %d\n", sum);
    printf("average: %.2f\n", average);
    if (x<y && x<z)
        printf("minimum: %d", x);
    else if (y<x && y<z)
        printf("minimum: %d", y);
    else
        printf("minimum: %d", z);
    return 0;
}
