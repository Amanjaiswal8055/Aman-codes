#include <stdio.h>

int main()
{
    int num;
    int i;

    printf("Enter the number you want the factorial of\n");
    scanf("%d", &num);

    for (i = 1; 1 <= num; num--)
    {
        i = i * num;
    }
    printf("%d", i);
}
