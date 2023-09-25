#include <stdio.h>
int main()
{
    int num;
    int a = 1;

    printf("Enter number\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}