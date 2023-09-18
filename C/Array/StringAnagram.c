#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];
    char str2[20];
    int len1 = 0, len2 = 0;
    char temp;
    printf("Enter first string\n");
    fgets(str1, 20, stdin);

    printf("Enter second string\n");
    fgets(str2, 20, stdin);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2)
    {
        printf("NOT ANAGRAM\n");
        return 0;
    }

    for (int i = 0; i < len1 - 1; i++)
    {
        for (int j = i + 1; j < len1; j++)
        {
            if (str1[i] > str1[j])
            {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
            if (str2[i] > str2[j])
            {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }
    for (int i = 0; i < len1; i++)
    {
        if (str1[i] != str2[i])
        {
            printf("NOT AMAGRAM\n");
            return 0;
        }
    }
    printf("The strings are equal\n");
    return 0;
}
