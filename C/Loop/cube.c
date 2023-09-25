#include <stdio.h>
int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("The cube of %d is : %d\n", i, i * i * i);
    }

    return 0;
}