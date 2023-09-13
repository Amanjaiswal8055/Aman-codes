#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    char rem;
    int length;

    printf("Enter the string\n");
    fgets(a, 100, stdin);

    printf("Enter the character you want to remove\n");
    scanf("%c", &rem);

    length = strlen(a);
    printf("%d\n", length);

    for (int i = 0; i < length; i++)
    {
        if (rem == a[i])
        {
            for (int j = i; j < length; j++)
            {
                a[j] = a[j + 1];
            }
            length--;
            i--;
        }

        // for removing vowel

        /*if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            for (int j = i; j < length; j++)
            {
                a[j] = a[j + 1];
            }
            i--;
            len--;
        }*/
    }
    puts(a);
    printf("%d\n", length);
    return 0;
}