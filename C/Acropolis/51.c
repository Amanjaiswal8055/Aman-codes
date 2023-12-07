#include <stdio.h>

int main()
{
    int number , convert;

    printf("Enter a binary number\n");
    scanf("%d", &number);

    printf("1.to convert into decimal number\n2.to convert into octal number\n3.to convert into hexadecimal number\n");
    scanf("%d",&convert);
    
    return 0;
}