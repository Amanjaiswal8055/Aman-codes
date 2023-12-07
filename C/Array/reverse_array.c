#include <stdio.h>
#include <string.h>

int main()
{
    int arr[15];
    int arr1[15];
    int n = 0;

    printf("Enter the value of numbers in array\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the values of %d index element in array\n", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr[n - i - 1];
        arr1[n - i - 1] = arr[i];
    }

    printf("forward array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    printf("Reverse array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr1[i]);
    }
    return 0;
}