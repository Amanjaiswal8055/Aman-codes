#include <stdio.h>

int print(int n)
{
    n = n + 2;
    printf("%d\n", n);

    return n;
}
int main()
{
    int n = 15;

    print(n);

    printf("%d\n", n);
    return 0;
}