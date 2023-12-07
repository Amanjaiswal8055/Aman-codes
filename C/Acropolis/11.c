#include <stdio.h>
#include <ctype.h>

int main()
{
    char a;

    printf("Enter a number\n");
    scanf("%c", &a);

    // if (isdigit(a))
    // {
    //     printf("True\n");
    // }
    // else
    // {
    //     printf("False\n");
    // }
    
    a = isdigit(a) ? printf("True") : printf("False");

    return 0;
}