
//_____________________Palindrome Number_____________________

#include <stdio.h>

int main()
{
    int n, temp;
    int reverse = 0;

    printf("Enter a number\n");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
    }
    printf("Number is %d\n", n);
    printf("Reverse is %d\n", reverse);

    if (n == reverse)
    {
        printf("The %d is palindrome number\n",n);
    }
    else
    {
        printf("The %d is not a palindrome number\n",n);
    }

    return 0;
}