#include <stdio.h>

int main()
{
    int num, sum = 1;

    printf("Enter the number\n");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        sum = sum * i;
    }
    printf("factorial of %d is %d\n",num,sum);
    
}