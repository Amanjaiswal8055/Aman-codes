#include <stdio.h>
 int factorial(int num)
// factorial
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}
int main()
{
     int num;
    printf("enter the number\n");
    scanf("%d", &num);
    printf("factorial of %d is %d\n", num, factorial(num));
    return 0;
}