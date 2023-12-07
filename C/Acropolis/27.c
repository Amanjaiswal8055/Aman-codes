#include <stdio.h>

int main()
{
    int n, temp = 0;
    int sum = 0;

    printf("Enter a number\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        temp = i;
        for (int j = 1; j <= i-1; j++)
        {
            temp = temp * i;
        }
        sum = sum + temp;
    }

    printf("Sum is %d\n", sum);

    return 0;
}