#include <stdio.h>

void aaaa(int, int, int);

int main()
{
    int a, b, c;

    printf("Enter the value a b and c\n");
    scanf("%d %d %d", &a, &b, &c);

    aaaa(a, b, c);
    return 0;
}
void aaaa(int x, int y, int z)
{
    int hypo = 0;
    int base = 0;
    int perp = 0;

    if (x > y && x > z)
    {
        hypo = x;
        base = y;
        perp = z;
    }
    else if (y > x && y > z)
    {
        hypo = y;
        base = x;
        perp = z;
    }
    else
    {
        hypo = z;
        base = y;
        perp = x;
    }
    if (hypo * hypo != base * base + perp * perp)
    {
        printf("this is a not pythagorous triplet");
    }
    else
    {
        printf("This is a pythagorous triplet");
    }
}