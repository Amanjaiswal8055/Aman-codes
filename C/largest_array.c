#include <stdio.h>
int main()
{
    int num[10];
    int lar;

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d\n", i);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (lar < num[i])
        {
            lar = num[i];
        }
    }
    printf("Largest element is %d\n", lar);
    return 0;
}