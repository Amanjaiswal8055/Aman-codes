#include<stdio.h>

int main()
{
    int a;

    printf("Enter a number\n");
    scanf("%d",&a);

    if (a > 0)
    {
        printf("A is positive\n");
    }
    else if (a < 0)
    {
        printf("A is negative\n");
    }
    else
    {
        printf("A is zero\n");
    }

    return 0;
}