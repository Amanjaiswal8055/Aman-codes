#include <stdio.h>

int binaryconvertion(int num)
{
    int rem, a = 1;
    int binary = 0;

    while (num != 0)
    {
        rem = num % 2;
        num = num / 2;
        binary = binary + rem * a;
        a = a * 10;
    }
    return binary;
}

int main()
{
    int num;
    
    printf("Enter a number\n");
    scanf("%d", &num);

    printf("The binary of %d is %d",num ,binaryconvertion(num));
    return 0;
}