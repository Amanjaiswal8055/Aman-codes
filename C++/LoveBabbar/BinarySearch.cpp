#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int number)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (1)
    {
        if (number == arr[mid])
        {
            cout << "Element is at " << mid << " index" << endl;
            return mid;
        }

        if (number < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
}

int main()
{
    pair<int ,int> aman;
    aman.first = 12;
    aman.second = 55;

    cout << aman.first << endl;
    cout << aman.second << endl;

    // int size , search;

    // cout << "Enter total number of elements in array" << endl;
    // cin >> size;

    // int arr[size];

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter the value at index " << i << endl;
    //     cin >> arr[i];
    // }

    // cout << "Enter element to search in array" << endl;
    // cin >> search;

    // binarySearch(arr, size, search);

    return 0;
}