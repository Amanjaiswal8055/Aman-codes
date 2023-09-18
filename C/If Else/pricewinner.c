#include <stdio.h>
int main()
{
    int maths, science;
    printf("enter your maths marks\n");
    scanf("%d", &maths);

    printf("enter your science marks\n");
    scanf("%d", &science);

    if (maths >= 33 && science >= 33)
    {
        printf("your are awarded 50 Rs\n");
    }
    else if (science >= 33 || maths >= 33)
    {
        printf("your are awarded 15 Rs\n");
    }

    return 0;
}