#include <stdio.h>

int main()
{
    int num;
    int out = 1;

    printf(" Enter number\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; num--)
    {
        out = out * num;
    }
    printf("%d",out);

    return 0;
}