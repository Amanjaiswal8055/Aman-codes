#include <stdio.h>
int main()
{
    int n;
    int count = 0;
    int print = 0;

    printf("Enter a number\n");
    scanf("%d", &n);

    printf("Series of prime number are :\t");

    for (int i = 2;print < n; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count <= 2)
        {
            printf("%d\t", i);
            print++;
        }
    }

    return 0;
}