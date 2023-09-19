#include<stdio.h>

int main()
{
    int odd  = 0,even = 0;

    for (int i = 1; i <= 100; i++)
    {
        even = even + i;
    }

    for (int i = 1; i <= 100; i++)
    {
        odd = odd + i;
    }
    printf("The sum of 100 even number is %d\n",even);
    printf("The sum of 100 odd number is %d\n",odd);
}