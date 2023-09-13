#include <stdio.h>
int main()
{
    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float a, b;
    while (1)
    {
        printf("enter the input charactor.\n   q to quit.\n  1.kms To Miles\n  2.inches To Foot\n  3.Cms To Inches\n  4.pound To Kgs\n  5.inches To Meters\n");
        scanf("%c", &input);
        {
            switch (input)
            {
            case ('q'):
                printf("you are quitting...\n");
                goto end;
                break;

            case ('1'):
                printf("enter the quantity in kms\n");
                scanf("%f", &a);
                b = a * kmsToMiles;
                printf("%fkm is equal to %fmile\n", a, b);
                break;

            case ('2'):
                printf("enter the quantity in inches\n");
                scanf("%f", &a);
                b = a * inchesToFoot;
                printf("%finches is equal to %ffoot\n", a, b);
                break;

            case ('3'):
                printf("enter the quantity in cms\n");
                scanf("%f", &a);
                b = a * cmsToInches;
                printf("%fcms is equal to %finches\n", a, b);
                break;

            case ('4'):
                printf("enter the quantity in pound\n");
                scanf("%f", &a);
                b = a * poundToKgs;
                printf("%fpound is equal to %fkg\n", a, b);
                break;

            case ('5'):
                printf("enter the quantity in inches\n");
                scanf("%f", &a);
                b = a * inchesToMeters;
                printf("%finches is equal to %fmeter\n", a, b);
                break;
            }
        end:
        }
    }
    return 0;
}
