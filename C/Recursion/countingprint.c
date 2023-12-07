#include <stdio.h>
#include <string.h>

void sum(int);

int main()
{
    int num;

    printf("Enter a number");
    scanf("%d", &num);

    sum(num);

    return 0;
}

void sum(int n)
{
    if (n != 0)
    {
        sum(n - 1);           //counting print
        printf("%d\n", n);
        // sum(n - 1); // reverse print
    }
}