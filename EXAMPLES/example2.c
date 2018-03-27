#include <stdio.h>
int main()
{
    int grade;
    printf("enter the grade: ");
    scanf("%d", &grade);
    switch(grade)
    {
        case 91 ... 100: printf("your grade is 'A'");
        break;
        case 76 ... 90: printf("your grade is 'B'" );
        break;
        case 51 ... 75: printf("your grade is 'C'" );
        break;
        case 26 ... 50: printf("your grade is 'D'" );
        break;
        case 0 ... 25: printf("your grade is 'F'");
        break;
    }
    return 0;
}
