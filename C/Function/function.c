#include <stdio.h>
int sum(int a, int b, int c)
{
    int x = a + b + c;
    return x;
}
int main()
{
    int a = 12, d;
    float c = 25, b = 13;

    printf("the sum is %d\n", sum(a, b, c));

    return 0;
}
