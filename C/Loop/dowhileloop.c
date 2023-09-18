#include <stdio.h>
int main()
// for counting
{
    int num, i = 1;

    printf("enter your number\n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", i);
        i = i + 1;
    } while (num >= i);

    return 0;
}