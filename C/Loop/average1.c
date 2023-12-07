#include <stdio.h>
int main()
{
    int num;
    float temp, sum = 0;

    printf("Enter the total numbers\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("Enter the %d number\n", i);
        scanf("%f", &temp);
        sum = sum + temp;
    }
    float average = sum / num;
    printf("The average is %f : ", average);

    return 0;
}