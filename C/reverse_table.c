#include <stdio.h>
int main()
{
    int a;
    int b;

    printf("Enter the you want the reverse multiplication table of \n");
    scanf("%d", &a);

    for (int i = 10; i >= 1; i--)
    {
        b = i * a;
        printf("%d * %d = %d\n", a, i, b);
    }
    return 0;
}