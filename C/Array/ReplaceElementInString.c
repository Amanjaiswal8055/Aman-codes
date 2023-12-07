#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    char a;

    printf("Enter the string\n");
    fgets(str, 20, stdin);

    printf("Enter character want to replace with space\n");
    scanf("%c", &a);

    int len = strlen(str);
    printf("Length is %d\n", len);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = a;
        }
    }
    puts(str);
    return 0;
}