#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }

    return 0;
}