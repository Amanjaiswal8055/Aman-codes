#include <stdio.h>

int fact(int num);

int main()
{
    int num;

    printf("Enter the number you want the factorial\n");
    scanf("%d", &num);

    printf("factorial of %d is %d\n", num, fact(num));
    return 0;
}

int fact(int num)
{
    if (num == 0)
    {
        return 1;
    }

    return num * fact(num - 1);
}