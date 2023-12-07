#include <stdio.h>
int main()
{

    int i, n;
    int t1 = 0, t2 = 1;
    int fib;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        fib = t1 + t2;
        t1 = t2;
        t2 = fib;
        printf("fib of %d is %d\n", i, fib);
    }
    return 0;
}
