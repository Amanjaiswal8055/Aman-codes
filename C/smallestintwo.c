#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d is small\n", b);
    }
    else if (a == b)
    {
        printf("%d is equal to %d\n", a, b);
    }
    else
        printf("%d is small\n", a);

    return 0;
}