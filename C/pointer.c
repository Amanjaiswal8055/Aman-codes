#include <stdio.h>
int swap(int *a, int *b);

int main()
{
    int x = 10, y = 33;

    swap(&x, &y);

    printf("%d  %d\n", x, y);

    return 0;
}

int swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}