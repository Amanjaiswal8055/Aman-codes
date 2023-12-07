#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d", &n);

    int temp = n;

    printf("The factors of %d are\n", n);
    while (temp != 1)
    {
        for (int i = 2; i < n / 2; i++)
        {
            if (temp % i == 0)
            {
                printf("%d\t", i);
                temp = temp / i;
                i--;
            }
        }
    }

    return 0;
}