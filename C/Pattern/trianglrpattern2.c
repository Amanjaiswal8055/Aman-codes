#include <stdio.h>
int main()
{
    int num;
    int a = 1;

    printf("Enter number\n");
    scanf("%d", &num);

    for (int row = 1; row <= num; row++)
    {
        for (int space = 0; space <= num - row; space++)
        {
            printf(" ");
        }
        for (int column = 1; column <= row; column++)
        {
            printf("%d ", a);
        }
        printf("\n");
    }
    return 0;
}