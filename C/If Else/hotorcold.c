#include<stdio.h>

int hotorcold(int temp)
{
    if (temp > 30)
    {
        printf("Temperature is hot\n");
    }
    else
    {
        printf("Temperature is cold\n");
    }
    
}

int main()
{
    int temp;
    printf("Enter temperature in celcius\n");
    scanf("%d",&temp);

    printf("%c\n",hotorcold(temp));

    return 0;
}