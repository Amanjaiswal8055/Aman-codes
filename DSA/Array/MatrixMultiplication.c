#include <stdio.h>

int main()
{
    int row1, column1, row2, column2, sum = 0;

    printf("Enter the number of rows and columns in arr1\n");
    scanf("%d %d", &row1, &column1);

    printf("Enter the number of rows and columns in arr2\n");
    scanf("%d %d", &row2, &column2);

    int arr1[row1][column1];
    int arr2[row2][column2];

    int arr3[row1][column2];

    if (column1 != row2)
    {
        printf("Invalid matrix\nAs the number of column of first matrix in not equal to the number of rows of second matrix\n");
        return 0;
    }

    printf("Enter the values of matrix 1\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("Enter the value at index %d%d\n", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the values of matrix 2\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("Enter the value at index %d%d\n", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("**********The first matrix is********** \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    printf("**********The second matrix is********** \n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            arr3[i][j] = 0;
            for (int k = 0; k < row2; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("++++++++++The size of new matrix is %d X %d++++++++++\n", row1, column2);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}