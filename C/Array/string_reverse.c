#include <stdio.h>
#include <string.h>

int main()
{
    char fullname[20];
    int length = 0;

    printf("Enter your full name\n");
    fgets(fullname, 20, stdin);

    length = strlen(fullname);

    printf("length = %d\n", length);

    printf("Reverse is : ");
    for (; length >= 0; length--)
    {
        printf("%c", fullname[length]);
    }
    printf("\n");
    return 0;
}