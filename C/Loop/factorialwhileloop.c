#include <stdio.h>
int main()
// for counting
{
    int num,i=1;
    printf("enter the number\n");
    scanf("%d", &num);

    while (1 <= num)
    {
        i = num * i;
        num--;
    }
    printf("%d\n", i);
    return 0;
}