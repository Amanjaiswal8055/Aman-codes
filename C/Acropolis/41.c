// _____________________Strong Number_____________________

#include <stdio.h>

int fact(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    return number * fact(number - 1);
}

int main()
{
    int n, temp;
    int sum = 0;

    printf("Enter a number: \n");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        sum = sum + fact(temp % 10);
        temp = temp / 10;
    }

    if (sum == n)
    {
        printf("%d is strong number\n",n);
    }
    else
    {
        printf("%d is not a strong number\n",n);
    }
    
    return 0;
}