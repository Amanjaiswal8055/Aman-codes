#include <stdio.h>

int main()
{
    int n;
    int num = 1;

    printf("Enter the number\n");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        int k = num;
        for (int j = 1; j <= i; j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
        num++;
    }

    return 0;
}