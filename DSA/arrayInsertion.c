#include <stdio.h>
int main()
{
    int size, addIndex, addNumber;

    printf("Enter the size of array\n");
    scanf("%d", &size);

    int arr[size + 1];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value at index %d\n", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the Index you want to insert\n");
    scanf("%d", &addIndex);

    size += 1;
    int temp = size - 1;

    printf("Enter number you want to add at %d index\n", addIndex);
    scanf("%d", &addNumber);

    for (int i = 0; i < size; i++)
    {
        if (i == addIndex)
        {
            for (int j = i; j < temp; temp--)
            {
                arr[temp] = arr[temp - 1];
            }
            arr[addIndex] = addNumber;
        }
    }

    printf("Printing the new array\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}