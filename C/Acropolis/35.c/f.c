#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    for (int i = n; i > 0; i--)
    {
        char alpha = 'A';
        for (int j = i; j > 0; j--)
        {
            printf("%c",alpha);
            alpha++;
        }
        printf("\n");
    }

    return 0;
}
