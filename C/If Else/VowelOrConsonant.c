#include <stdio.h>
#include <string.h>

int main()
{
    char c;

    printf("Enter character\n");
    scanf("%c", &c);
    if ('a' <= c && 'z' >= c || 'A' <= c && 'Z' >= c)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            printf("%c is vowel\n", c);
        }
        else
        {
            printf("%c is consonant\n", c);
        }
    }
    else
    {
        printf("Invalid character\n");
    }
    return 0;
}