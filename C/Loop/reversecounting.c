#include <stdio.h>
int main()
// for counting
{
    int num, i = 0;
    printf("enter the number\n");
    scanf("%d", &num);

    while (i < num)
    {
        printf("%d\n", num);
        num = num - 1;
    }
    return 0;
}