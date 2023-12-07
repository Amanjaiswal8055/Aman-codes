#include <stdio.h>
int main()
{
    int i;
    char j, input, alphabet;
    printf("Enter an uppercase character you want to print in the last row:\n ");
    scanf("%c", &input);

        for (alphabet = 'A'; alphabet <= input; alphabet++)
        {
            printf("%c\n", alphabet);
        }
    return 0;
}