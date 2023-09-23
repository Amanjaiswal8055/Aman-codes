#include <stdio.h>

int main()
{
    int n, temp;
    int add = 1;

    printf("Enter a number\n");
    scanf("%d", &n);

    temp = n;
    while (temp != 0)
    {
        temp = temp / 10;
        add = add * 10 + 1;
    }
    add = add / 10;

    printf("The entered number is %d\n", n);
    printf("The number after adding is %d\n", n + add);

    return 0;
}