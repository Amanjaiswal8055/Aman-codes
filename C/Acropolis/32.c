#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 1;
    int number, fib = 0;

    printf("Enter the number of fib series.\n");
    scanf("%d", &number);

    printf("Fibonacci series of %d number is: ", number);

    for (int i = 1; i <= number; i++)
    {
        fib = num1 + num2;
        num1 = num2;
        num2 = fib;
        printf("%d\t", fib);
    }
    printf("\n");

    return 0;
}