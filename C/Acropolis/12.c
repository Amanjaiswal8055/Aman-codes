#include <stdio.h>

int main()
{
    int x = 5;
    int y = 33;

    x = x + y;
    y = x - y;
    x = x - y;

    printf("X = %d\n",x);
    printf("Y = %d\n",y);

    return 0;
}