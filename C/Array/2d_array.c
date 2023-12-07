#include <stdio.h>

int main()
{
    int arr[14][9] ;

    for (int i = 0; i < 14; i++)
    {    
        for (int j = 0; j < 9; j++)
        {
            printf("Address of arr[%d][%d] is %u\n", i, j, &arr[i][j]);
        }
    }

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("Enter the value of (%d,%d) element\n", i, j);
    //         scanf("%d", &arr[i][j]);
    //     }
    // }

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}