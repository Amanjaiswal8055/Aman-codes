#include <stdio.h>

int main()
{
    int num[10];
    int even[10];
    int odd[10];
    int e = 0, o = 0;

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element\n", i);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        if (num[i] % 2 == 0)
        {
            even[e] = num[i];
            e++;
        }
        else
        {
            odd[o] = num[i];
            o++;
        }
    }
    for (int i = 0; i < e; i++)
    {
        printf("%d  ", even[i]);
    }
    printf("\n");
    for (int i = 0; i < o; i++)
    {
        printf("%d  ", odd[i]);
    }
    return 0;
}