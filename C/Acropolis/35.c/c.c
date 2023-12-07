#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        char alpha = 'A';
        for (int j = 0; j <= i; j++)
        {
            printf("%c",alpha);
            alpha++;
        }
        printf("\n");
    }

    return 0;
}