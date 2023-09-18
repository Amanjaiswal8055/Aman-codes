#include <stdio.h>
int main()
{
    int num, units, tens, hundreds;
    printf("Enter number\n");
    scanf("%d", &num);

    units = num % 10;
    num = num / 10;

    tens = num % 10;
    num = num / 10;

    hundreds = num % 10;

    printf("hundreds = %d\n", hundreds);
    printf("tens     = %d\n", tens);
    printf("units    = %d\n", units);

    return 0;
}