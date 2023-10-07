#include <iostream>

using namespace std;

int main()
{
    // int arr[10] = {123, 6, 5, 10, 89, 20, 1, 23, -32, -55};
    int arr[10] = {1, 6, 5, 10, 189, 120, 121, 123, 132, 155};

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j <= 10 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << endl;

    return 0;
}