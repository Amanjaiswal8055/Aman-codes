#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    printf("Enter the string\n");
    fgets(str, 20, stdin);

    int len = strlen(str);
    printf("Length is %d\n", len);

    for (int i = 0; i < len - 1; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = str[i] - 32;
        }
    }
    puts(str);
    return 0;
}