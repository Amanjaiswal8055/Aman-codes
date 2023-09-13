#include <stdio.h>

int main()
{
    int num[10];
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element\n", i);
        scanf("%d", &num[i]);
    }
    for (int j = 0; j < 4; j++)
    {
        sum = sum + num[j];
    }
    printf("The sum is %d\n", sum);
    return 0;
}