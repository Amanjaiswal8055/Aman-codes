#include <stdio.h>
int main()
{
    int rs;

    printf("Enter rupees you have\n");
    scanf("%d", &rs);

    int rs2000 = rs / 2000;
    int mod2000 = rs % 2000;
    printf("2000 = %d.\n", rs2000);

    int rs500 = mod2000 / 500;
    int mod500 = mod2000 % 500;
    printf("500  = %d.\n", rs500);

    int rs200 = mod500 / 200;
    int mod200 = mod500 % 200;
    printf("200  = %d.\n", rs200);

    int rs100 = mod200 / 100;
    int mod100 = mod200 % 100;
    printf("100  = %d.\n", rs100);

    int rs50 = mod100 / 100;
    int mod50 = mod100 % 100;
    printf("50   = %d.\n", rs50);

    int rs20 = mod50 / 20;
    int mod20 = mod50 % 20;
    printf("20   = %d.\n", rs20);

    int rs10 = mod20 / 10;
    int mod10 = mod20 % 10;
    printf("10   = %d.\n", rs10);

    int rs1 = mod10 / 1;
    int mod1 = mod10 % 1;
    printf("1    = %d.\n", rs1);

    return 0;
}