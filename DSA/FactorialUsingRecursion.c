#include <stdio.h>

long factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
int main()
{
    int num;

    printf("Enter the number you want the factorial of.\n");
    scanf("%d", &num);

    printf("Factorial of %d is %ld\n", num, factorial(num));
    return 0;
}