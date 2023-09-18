#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Enter the number you want the square of : ");
    scanf("%d", &num);

    double b = pow(num, 2);

    printf("%f\n", b);
    return 0;
}
