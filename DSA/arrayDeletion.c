#include <stdio.h>
int main()
{
    int arr[10], size, Index;

    printf("Enter the size of array\n");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value at index %d\n", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the Index you want to delete\n");
    scanf("%d", &Index);

    size -= 1;

    for (int i = 0; i < size; i++)
    {
        if (i == Index)
        {
            for (int j = i; j < size; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }

    printf("Printing the new array\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}