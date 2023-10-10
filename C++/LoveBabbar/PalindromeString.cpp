#include <iostream>
#include <string.h>
using namespace std;

bool Palindrome(char arr[], int length)
{
    int s = 0;
    int e = length - 1;
    while (s < e)
    {
        if (arr[s] != arr[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{

    char arr[] = {"Ama22amA"};
    int length = strlen(arr);

    cout << Palindrome(arr, length) << endl;

    return 0;
}