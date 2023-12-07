#include <stdio.h>
#include <string.h>

int main()
{
    int num, re;
    int b = 0;

    printf("Enter a number\n");
    scanf("%d", &num);

    int c = num;

    while (c > 0)
    {
        re = c % 10;
        c = c / 10;
        b = b * 10 + re;
    }

    if (num == b)
    {
        printf("%d is Palindrome Number\n", num);
    }
    else
    {
        printf("Not a palindrome number!!\n");
    }
    return 0;
}