#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    char character;
    int length, count = 0;

    printf("Enter the string\n");
    fgets(a, 100, stdin);

    printf("Enter the character you want to check occurence\n");
    scanf("%c", &character);

    length = strlen(a);

    for (int i = 0; i < length; i++)
    {
        if (character == a[i])
        {
            count++;
        }
    }
    printf("%c comes %d times", character, count);

    return 0;
}