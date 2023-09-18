#include <stdio.h>
int main()
{
    int maths, physics, chemistry;

    printf("enter your maths marks\n");
    scanf("%d", &maths);

    printf("enter your physics marks\n");
    scanf("%d", &physics);

    printf("enter your chemistry marks\n");
    scanf("%d", &chemistry);

    if (maths >= 33 && physics >= 33 && chemistry >= 33)
    {
        printf("you are awarded with 50 Rs");
    }

    else if (physics >= 33 && chemistry >= 33)
    {
        printf("you are awarded with 20 Rs");
    }
    else if (chemistry >= 33 && maths >= 33)
    {
        printf("you are awarded with 20 Rs");
    }
    else if (physics >= 33 && maths >= 33)
    {
        printf("you are awarded with 20 Rs");
    }

    else if (maths >= 33 || physics >= 33 || chemistry >= 33)
    {
        printf("you are awarded with 10 Rs");
    }
    return 0;
}