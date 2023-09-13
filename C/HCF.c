#include <stdio.h>
int main()
{
    int a, b, hcf = 0, num = 0;
    int i = 1;

    printf("Program to find HCF of two numbers\n");

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    num = (a < b) ? a : b;

    while (num >= i)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
        i++;
    }
    printf("The HCF of %d and %d is %d", a, b, hcf);
    return 0;
}