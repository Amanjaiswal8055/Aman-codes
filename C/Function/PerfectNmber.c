#include <stdio.h>

int perfectnumber(int num)
{
    int newnum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            newnum = newnum + i;
        }
    }

    return newnum;   
}


int main()
{
    int num,newnum;

    printf("Enter a number\n");
    scanf("%d", &num);
    
    newnum = perfectnumber(num);

    if (newnum == num)
    {
        printf("%d is a perfect number",num);
    }
    else
    {
        printf("%d is not a perfect number",num);
    }

    return 0;
}