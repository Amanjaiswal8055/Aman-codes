#include <stdio.h>

int main()
{
    int amount, time;
    float rate, si, Total;

    printf("Enter the Amount.\n");
    scanf("%d", &amount);

    printf("Enter the rate of interest.\n");
    scanf("%f", &rate);

    printf("Enter the time(In month).\n");
    scanf("%d", &time);

    si = (amount * rate * time) / 100;
    Total = si + amount;

    printf("Total interest is %f", si);
    printf("Total Amount with interest is %f", Total);

    return 0;
}