#include <stdio.h>

int square(int n);
int cube(int n);

int main()
{
    int n, input;

    printf("Choose the below one.\n 1.Square\n 2.Cube\n");
    scanf("%d", &input);

    if (input == 1)
    {
        printf("Enter number you want the square of\n");
        scanf("%d", &n);

        printf("%d", square(n));
    }
    if (input == 2)
    {
        printf("Enter number you want the cube of\n");
        scanf("%d", &n);

        printf("%d", cube(n));
    }
    return 0;
}

int square(int n)
{
    int square = n * n;
    return square;
}

int cube(int n)
{
    int cube = n * n * n;
    return cube;
}