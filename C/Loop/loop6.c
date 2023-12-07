#include <stdio.h>
int main()
{
    int num;
    int j;

    printf("Enter the number\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        j++;
        for (j = 1; j <= num; j++)
        {
            printf("%d*%d = %d, ", j, i, i * j);
        }
        printf("\n");
    }

    return 0;
}