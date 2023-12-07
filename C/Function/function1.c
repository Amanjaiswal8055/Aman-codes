#include <stdio.h>
void printplus(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", '+');
    }
}
int main()
{
    int n;

    printf("Enter the number of plus\n");
    scanf("%d", &n);

    printplus(n);
    return 0;
}