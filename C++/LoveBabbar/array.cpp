#include <iostream>
using namespace std;

int array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i; j < size - 1; j++)
            {
                swap(arr[j], arr[j + 1]);
            }
            size--;
            i--;
        }
        cout << "aa" << endl;
        arr[size] = 0;
    }
    return *arr;
}

int main()
{
    int arr[8] = {1, 0, 2, 235, 44, 0, 5, 0};
    int size = 8;

    cout << "Before" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << i << " element = " << arr[i] << endl;
    }

    array(arr, size);
    cout << "After" << endl;

    for (int i = 0; i < 8; i++)
    {
        cout << i << " element = " << arr[i] << endl;
    }

    return 0;
}