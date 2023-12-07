#include <stdio.h>
#include <ctype.h>

int main()
{
    char a;
    printf("Enter the value\n");
    scanf("%c", &a);

    if (isdigit(a))
    {
        printf("%c is a numeric value\n", a);
    }
    else
        printf("%c is not a numeric value\n", a);

    return 0;
}