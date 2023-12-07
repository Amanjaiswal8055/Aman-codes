#include <stdio.h>

int main()
{
    float num1, num2, total;
    int cal;

    printf("Enter the first number\n");
    scanf("%f", &num1);

    total = num1;

    printf("press\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Total\n");
    scanf("%d", &cal);

    do
    {

        switch (cal)
        {
        case 1:
            printf("Enter second number\n");
            scanf("%f", &num2);
            total = total + num2;
            printf("\n\nTotal = %.2f\n\n", total);
            break;

        case 2:
            printf("Enter second number\n");
            scanf("%f", &num2);
            total = total - num2;
            printf("\n\nTotal = %.2f\n\n", total);
            break;

        case 3:
            printf("Enter second number\n");
            scanf("%f", &num2);
            total = total * num2;
            printf("\n\nTotal = %.2f\n\n", total);
            break;

        case 4:
            printf("Enter second number\n");
            scanf("%f", &num2);
            total = total / num2;
            printf("\n\nTotal = %.2f\n\n", total);
            break;

        default:
        {
            printf("Invalid operation!!\n");
            goto end;
        }
        }

        printf("press\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Total\n");
        scanf("%d", &cal);

    } while (cal != 5);
    
end:
    printf("\n\n\nThe Total of your calculation is %.2f\n\n", total);

    return 0;
}