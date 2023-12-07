#include <stdio.h>
int main()
{
    int num, rem;
    int sum = 0;

    printf("Enter the number you want the check a number is perfect or not\n");
    scanf("%d", &num);

    for (int i = 1; i <= num / 2; i++)
    {
        rem = num % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        printf("The number %d is perfect number\n", num);
    }
    else
    {
        printf("The number %d is not a perfect number\n", num);
    }
    return 0;
}