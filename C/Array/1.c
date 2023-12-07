#include <stdio.h>

int main()
{
    int arr[5] = {1, 12, 33, 48, 55};
    int count;

    for (int i = 0; i < 5; i++)
    {
        count = 0;
        int a = arr[i];
        for (int j = i; j < 5; j++)
        {
            arr[j] = arr[j] - a;
            printf("%d\t", arr[j]);

            if (arr[j] != 0)
            {
                count++;
            }
        }

        printf("\n");
        printf("%d\n",count);
    }
    
    return 0;
}