#include<stdio.h>
int main()
{
    int num,temp;

    printf("Enter a number\n");
    scanf("%d",&num);

    temp = num / 2;

    if (num == temp *2)
    {
        printf("%d is even number\n",num);
    }
    else
    {
        printf("%d is odd number\n",num);
    }

    return 0;
}