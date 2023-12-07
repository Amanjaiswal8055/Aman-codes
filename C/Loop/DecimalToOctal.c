#include <stdio.h>

int main()
{
    int a, i, arr[10];
    int rem = 0;

    printf("Enter the first number\n");
    scanf("%d", &a);

    for (i = 0; a > 0; i++)
    {
        rem = a % 8;
        a = a / 8;
        arr[i] = rem;
    }

    printf("The octal is\n");

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
    return 0;
}