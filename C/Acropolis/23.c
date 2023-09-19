#include <stdio.h>

int main()
{
    int date, month, year;

    printf("Enter month date and year\n");
    scanf("%d %d %d", &month, &date, &year);
    switch (month)
    {
    case 1:
        printf("January %d %d\n", date, year);
        break;
    case 2:
        printf("February %d %d\n", date, year);
        break;
    case 3:
        printf("March %d %d\n", date, year);
        break;
    case 4:
        printf("April %d %d\n", date, year);
        break;
    case 5:
        printf("May %d %d\n", date, year);
        break;
    case 6:
        printf("June %d %d\n", date, year);
        break;
    case 7:
        printf("July %d %d\n", date, year);
        break;
    case 8:
        printf("August %d %d\n", date, year);
        break;
    case 9:
        printf("September %d %d\n", date, year);
        break;
    case 10:
        printf("October %d %d\n", date, year);
        break;
    case 11:
        printf("November %d %d\n", date, year);
        break;
    case 12:
        printf("December %d %d\n", date, year);
        break;

    default:
        printf("Enter valid month!!");
        break;
    }
}