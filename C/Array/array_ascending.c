#include <stdio.h>

int main()
{
    int num[10];
    int temp;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element\n", i);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (num[i] > num[j]) // change < into > for descending
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", num[i]);
    }
    printf("\n");
    return 0;
}
