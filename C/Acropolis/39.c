#include <stdio.h>

int main()
{
    int n,temp;
    int reverse = 0;

    printf("Enter a number\n");
    scanf("%d", &n); 

    temp = n;

    while (n != 0)
    {
        reverse = (reverse * 10) + (n % 10);
        n = n / 10;
    }
    printf("Number is %d\n",temp);
    printf("Reverse is %d\n", reverse);


    return 0;
}