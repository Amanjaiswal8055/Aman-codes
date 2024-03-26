#include <stdio.h>
#include <math.h>

int main()
{
    int n, ans = 0, rem = 0;

    printf("Enter number you want to convert from decimal to binary\n");
    scanf("%d", &n);

    for (int i = 0; n != 0; i++)
    {
        rem = n % 2;
        n = n / 2;
        ans = (rem * pow(10, i)) + ans;
    }

    printf("%d", ans);

    return 0;
}