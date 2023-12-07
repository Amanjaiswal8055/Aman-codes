#include <stdio.h>

int fun1(int count, int rem)
{
    int sum;
    sum = rem;
    for (int i = count - 1; i > 0; i--)
    {
        sum = sum * rem;
        count--;
    }
    return sum;
}

int digitInNumber(int number)
{
    int count = 0;

    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    int sum = 0;

    printf("Enter a number\n");
    scanf("%d", &n);

    int temp = n;
    int digit = digitInNumber(n);

    printf("%d\n", digit);

    while (temp != 0)
    {
        sum = sum + fun1(digit, (temp % 10));
        temp = temp / 10;
    }

    if (sum == n)
    {
        printf("%d is Armstrong number\n",n);
    }
    else
    {
        printf("%d is not a Armstrong number\n",n);
    }
    

    return 0;
}