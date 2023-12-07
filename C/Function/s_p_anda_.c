#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}
int product(int a, int b)
{
    return a * b;
}
int average(int a, int b)
{
    int c = (a + b) / 2;
    return c;
}

int main()
{
    int a, b;

    printf("Enter the values\n");
    scanf("%d %d", &a, &b);

    printf("%d\n", sum(a, b));
    printf("%d\n", product(a, b));
    printf("%d\n", average(a, b));

    return 0;
}