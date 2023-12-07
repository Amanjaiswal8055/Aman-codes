#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int space = 0; space < n-i; space++)
        {
            printf(" ");
        }
        for (int star = 1; star <= i; star++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}