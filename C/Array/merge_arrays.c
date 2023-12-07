#include <stdio.h>
int main()
{
    int arr1[10];
    int arr2[10];
    int arr3[10];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of arr1[%d] element : ", i);
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of arr2[%d] element : ", i);
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
    for (int j = 0; j < 4; j++)
    {
        printf("The value of %d element is : %d\n", j, arr3[j]);
    }
    return 0;
}