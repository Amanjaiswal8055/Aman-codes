#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two number\n");
    scanf("%d %d", &a, &b);

    if (b % a == 0)
    {
        printf("%d is multiple of %d\n", b, a);
    }
    else
    {
        printf("%d is not a multiple of %d\n", b, a);
    }
    return 0;
}