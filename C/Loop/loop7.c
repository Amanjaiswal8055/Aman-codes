#include <stdio.h>
int main()
{
    int num;
    int sum;

    printf("Enter the number\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d ", (2 * i) - 1);
        sum = sum + (2 * i) - 1;
    }
    printf("\nThe sum of %d odd numbers is %d\n", num, sum);

    return 0;
}