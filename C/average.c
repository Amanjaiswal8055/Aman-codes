#include <stdio.h>

int main()
{
    float a,b,c;
    
    printf("Enter your numbers\n");
    scanf("%f %f %f",&a,&b,&c);

    printf("Average is %f\n",(a+b+c)/3);

    return 0;
}