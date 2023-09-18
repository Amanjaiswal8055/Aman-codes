#include <stdio.h>
int main()
//for odd number
{
    int num, i = 1;
    printf("enter a numnber\n");
    scanf("%d", &num);

    while (i < num)
    {
        printf("%d\n", i);
        i = i + 2;
    }

return 0;
}