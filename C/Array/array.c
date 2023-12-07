#include <stdio.h>
int main()
{
    float price[3];
    printf("Enter the price of tea\n");
    scanf("%f", &price[0]);

    printf("Enter the price of oil\n");
    scanf("%f", &price[1]);

    printf("Enter the price of sugar\n");
    scanf("%f", &price[2]);

    printf("the price of tea is %f\n", price[0] + (0.18 * price[0]));
    printf("the price of oil is %f\n", price[1] + (0.18 * price[1]));
    printf("the price of sugar is %f\n", price[2] + (0.18 * price[2]));

    return 0;
}