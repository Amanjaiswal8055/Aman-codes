#include <stdio.h>
int main()
{
    int num;

    printf("Enter number\n");
    scanf("%d", &num);
    int a = 1;

    int m = (num - 1);

    for (int row = 11; row <= num; row++)
    {
        for (int space = 0; space < (m); space++)
        {
            printf(" ");
        }
        for (int column = 1; column <= a; column++)
        {
            printf("%d ", row);
        }
        printf("\n");
        m--;
        a++;
    }

    return 0;
}