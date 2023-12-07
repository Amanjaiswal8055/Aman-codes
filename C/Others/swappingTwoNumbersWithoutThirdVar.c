#include <stdio.h>
#include <string.h>

int main()
{
    int a, b;

    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);

    printf("The numbers is %d %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping");
    printf("The numbers is %d %d\n", a, b);

    return 0;
}
