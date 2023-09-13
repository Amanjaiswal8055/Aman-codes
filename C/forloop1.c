#include <stdio.h>
//factorial
int main()
{
    int num, i, a = 1;

    printf("enter a number\n");
    scanf("%d", &num);

    for (i = 1; a <= num; a++)
    {
        i = i * a;
    }
    printf("the factorial of %d is %d\n", num, i);
    return 0;
}
