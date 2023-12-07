#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number you want to check that a number is prime or not\n");
    scanf("%d", &num);

    if (num == 2 || num == 3 || num == 5 || num == 7)
    {
        printf("%d is a prime number\n", num);
        goto end;
    }

    if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0)
    {
        printf("%d is not a prime number.\n", num);
    }
    else
    {
        printf("%d is a prime number", num);
    }
    end:
    return 0;
}