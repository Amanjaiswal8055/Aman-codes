#include <stdio.h>
int main()
{
    int sum, num;

    printf("Enter number\n");
    scanf("%d", &num);

    printf("The even numbers are : ");

    for (int i = 1; i <= num; i++)
    {
        printf("%d ", 2 * i);
        sum = sum + 2 * i;
    }
    printf("\nThe sum is %d", sum);

    return 0;
}