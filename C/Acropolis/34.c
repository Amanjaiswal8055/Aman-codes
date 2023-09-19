#include<stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter a number\n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        sum = sum + i*2+1;
    }

    printf("Sum is %d\n",sum);
    
    return 0;
}