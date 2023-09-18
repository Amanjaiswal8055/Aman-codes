#include <stdio.h>

int main()
// code for table

{
    int num, i = 1;
    printf("enter the number you want the multiplication table of\n");
    scanf("%d", &num);

    do
    {
        printf("%d*%d=%d\n", num, i, num * i);
        i = i + 1;
    } while (i <= 10);

    return 0;
}