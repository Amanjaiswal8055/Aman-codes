#include <stdio.h>
#include <string.h>

int main()
{
    int a, b ,c;

    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);

    printf("The numbers is %d %d\n", a, b);
    c = a ;
    a = b ;
    b = c;

    printf("After swapping");
    printf("The numbers is %d %d\n", a, b);

    return 0;
}
