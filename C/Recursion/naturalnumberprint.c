#include <stdio.h>
void natural(int num);

int main()
{
    int num;

    printf("Enter the number\n");
    scanf("%d", &num);

    natural(num);

    return 0;
}
void natural(int num)
{
    int number = 0;
    if (num > 0)
    {
        natural(num - 1);
        printf("%d\n", num);
    }
}