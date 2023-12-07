#include <stdio.h>

int main()
{
    int row, column;
    int n;
    printf("enter number\n");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (column = 0; column <= n - row; column++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}