#include <stdio.h>

int main()
{
    int a, b, c, temp;
    int big, med, small;

    printf("Enter three number\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        big = a;
        if (b > c)
        {
            med = b;
            small = c;
        }
        else
        {
            med = c;
            small = b;
        }
    }
    else if (b > a && b > c)
    {
        big = b;
        if (a > c)
        {
            med = a;
            small = c;
        }
        else
        {
            med = c;
            small = a;
        }
    }
    else
    {
        big = c;
        if (a > b)
        {
            med = a;
            small = b;
        }
        else
        {
            med = b;
            small = a;
        }
    }

    printf("Large = %d\nMedium = %d\nSmall = %d\n",big,med,small);

    return 0;
}