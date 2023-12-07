#include <stdio.h>

int main()
{
    int row, star, space;
    int num;

    printf("Enter the number you want the size of last row of pyramid\n");
    scanf("%d", &num);

    printf("LAST ROW OF PYRAMID HAVE ALWAYS ODD NUMBER OF STARS.\n\n");

    for (row = 1; row <= num; row++)
    {
        for (space = 1; space <= num - row; space++)
        {
            printf(" ");
        }
        for (star = 1; star <= (2*row) - 1; star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
