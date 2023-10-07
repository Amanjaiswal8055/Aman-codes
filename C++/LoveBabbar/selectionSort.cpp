#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {123, 6, 5, 10, 89, 20};

    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}