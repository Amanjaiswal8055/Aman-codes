#include <stdio.h>
int main()
//for even number
{
    int num, i = 0;
    printf("enter the number\n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", i);
        i = i + 2;

    } while (i <= num);

    return 0;
}