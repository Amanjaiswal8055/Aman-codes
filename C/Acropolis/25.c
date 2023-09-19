#include <stdio.h>

int main()
{
    int n;
    float average ,sum = 0;

    printf("Enter a number\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", i);
        sum = sum + i;
    }
    average = sum / n;

    printf("\nSum is %.f\n",sum);
    printf("Average is %.3f\n",average);

    return 0;
}