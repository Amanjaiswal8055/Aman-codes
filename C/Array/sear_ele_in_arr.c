#include <stdio.h>

int main()
{
    int num[10];
    int temp;
    int element;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element\n", i);
        scanf("%d", &num[i]);
    }

    printf("Enter the value of element\n");
    scanf("%d", &element);

    for (int i = 0; i < 5; i++)
    {
        if (num[i] == element)
        {
            printf("Element is on %d index\n", i);
            goto end;
            ;
        }
    }
    printf("Element not found!!");
end:
    return 0;
}