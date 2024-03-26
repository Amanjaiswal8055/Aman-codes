#include <stdio.h>

// int main()
// {
//     int a, i, arr[10];
//     int rem = 0;

//     printf("Enter the first number\n");
//     scanf("%d", &a);

//     for (i = 0; a > 0; i++)
//     {
//         rem = a % 2;
//         a = a / 2;
//         arr[i] = rem;
//     }

//     printf("The binary is\n");

//     for (int j = i - 1; j >= 0; j--)
//     {
//         printf("%d", arr[j]);
//     }
//     return 0;
// }

int main()
{
    int n, ans = 0, rem = 0;

    printf("Enter number you want to convert from decimal to binary\n");
    scanf("%d", &n);

    for (int i = 0; n != 0; i++)
    {
        rem = n % 2;
        n = n / 2;
        ans = (rem * pow(10, i)) + ans;
    }

    printf("%d", ans);

    return 0;
}