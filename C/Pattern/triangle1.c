#include <stdio.h>

int main() 
{

    int row;
    int input;

    printf("Choose from the below.\n 1.Triangular star pattrn.\n 2.Reverse triangular star pattrn.\n");
    scanf("%d", &input);

    switch (input)
    {
    case 1:
        printf("Enter number of stars in last row\n");
        scanf("%d", &row);

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

    case 2:
        printf("Enter number of stars in first row\n");
        scanf("%d", &row);

        for (int i = 0; i <= row; i++)
        {
            for (int j = 1; j <= row - i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

    default:
        break;
    }
    return 0;
}