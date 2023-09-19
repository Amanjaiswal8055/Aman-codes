#include <stdio.h>
#define R 4
#define C 5

void spiralOfMatrix(int row, int col, int arr1[R][C])
{
    int i, r = 0, c = 0;
    while (r < row && c < col)
    {
        for (i = c; i < col; ++i)
        {
            printf("%d ", arr1[r][i]);
        }
        r++;

        for (i = r; i < row; ++i)
        {
            printf("%d ", arr1[i][col - 1]);
        }
        col--;

        if (r < row)
        {
            for (i = col - 1; i >= c; --i)
            {
                printf("%d ", arr1[row - 1][i]);
            }
            row--;
        }

        if (c < col)
        {
            for (i = row - 1; i >= r; --i)
            {
                printf("%d ", arr1[i][c]);
            }
            c++;
        }
    }
}
int main()
{
    int i, j;
    int arr1[R][C] = {{1, 2, 3, 4, 5},
                      {14, 15, 16, 17, 6},
                      {13, 20, 19, 18, 7},
                      {12, 11, 10, 9, 8}};
    //------------- print original array ------------------
    printf("The given array in matrix form is :  \n");
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("------------------------------------------------------\n");
    printf("The spiral form of above matrix is: \n");

    spiralOfMatrix(R, C, arr1);

    return 0;
}