#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];
    char str2[20];
    int len1 = 0;
    int len2 = 0;
    char temp;

    printf("Enter first string\n");
    fgets(str1, 20, stdin);

    len1 = strlen(str1) - 1;
    len2 = len1;

    printf("%d\n", len1);

    for (int i = 0; i < (len1 / 2); i++)
    {
        if (str1[i] != str1[len2 - 1])
        {
            printf("NOT PALINDROME");
            return 0;
        }
        len2--;
    }

    printf("PALINDROME");

    return 0;
}