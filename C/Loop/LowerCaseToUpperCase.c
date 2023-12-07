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
        if (str[i] >= 'a' && str[i] <= 'z')      // a =A and z = Z
        {
            str[i] = str[i] - 32;                // (-) = (+)
        }                                        // for uppercase to lowercase
    }
    puts(str);
    return 0;
}