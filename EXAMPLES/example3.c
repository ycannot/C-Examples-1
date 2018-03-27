#include <stdio.h>
#include <math.h>
int main()
{
    float x,y;
    float z;
    printf("enter two real number(format(x, y)):\n");
    scanf("%f, %f",&x , &y);

    if (x>4)
    {
        if (y<2)
            z = pow(x,2)*y;
        else
            z = pow(x,3)*pow(y,2);
    }


    else
    {
        if (y<-1)
            z = exp(x+y);
        else if (y>=1)
            z = x/(y+1);
    }
    printf("z = %.2f", z);
    return 0;
}
