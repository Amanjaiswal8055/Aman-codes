#include<stdio.h>
int main()
{
    printf("BOSS\n");

    return 0;
}

                                         //array
 
#include <stdio.h>
int main()
{
    int num[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d\n", i);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d element is %d\n",i,num[i]);
    }
    
    return 0;
}   