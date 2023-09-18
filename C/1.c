#include <stdio.h>

int main()
{
    int row ,column;

    printf("Enter a number of rows and columns of matrix\n");
    scanf("%d%d",&row,&column);

    int matrix[row][column];

    printf("Enter the elements of matrix ;\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }
    
     
    return 0;
}