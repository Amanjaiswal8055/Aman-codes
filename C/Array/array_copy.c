#include <stdio.h>

int main()
{
    int num[10];
    int sum = 0;
    int num1[10];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element\n", i);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        num1[i] = num[i];
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element is %d\n",i, num1[i]);
    }
    return 0;
}