#include <stdio.h>
int main()
{
    int start ,end;
    int count = 0;

    printf("Enter starting number\n");
    scanf("%d", &start);

    printf("Enter end number\n");
    scanf("%d", &end);

    printf("Series of prime number are :\t");

    for (int i = start;i < end; i++)
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
        }
    }

    return 0;
}