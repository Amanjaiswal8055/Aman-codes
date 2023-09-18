#include<stdio.h>
int main ()
{
    float c ,f;
    printf("Enter temperature in centigrade\n");
    scanf("%f",&f);
    
    c= (f-32)/1.8;

    printf("%f",c);

    return 0;
}