#include<stdio.h>

int main()
{
    int n;
    float sum = 0;

    printf("Enter a number\n");
    scanf("%d",&n);

    for (float i = 1; i <= n; i++)
    {
        sum = sum + (1/i);
    }
    
    printf("%f is sum\n",sum);

    return 0;
}