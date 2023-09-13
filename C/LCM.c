#include <stdio.h>
int main()
{
    int a, b, num;

    printf("Program to find LCM of two numbers\n");

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    num = (a > b) ? a : b;

    while (1)
    {
        if (num % a == 0 && num % b == 0)
        {
            printf("The LCM of %d and %d is %d", a, b, num);
            break;
        }
        num++;
    }
    return 0;
}