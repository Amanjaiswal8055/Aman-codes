#include <stdio.h>
int main()
{
    int r, c;

    printf("Enter the number of rows : ");
    scanf("%d", &r);

    printf("Enter the number of column :  ");
    scanf("%d", &c);

    int num[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the value of %d %d element  : ", i, j);
            scanf("%d", &num[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", num[i][j]);
        }
        printf("\n");
    }
    return 0;
}