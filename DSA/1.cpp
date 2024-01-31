#include<iostream>

using namespace std;

int main()
{
    int a[3];
    int b[3];
    int arr[2] = {0, 0};

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        cin >> b[i];

        if (a[i] > b[i])
        {
            arr[0]++;
        }
        else if (a[i] < b[i])
        {
            arr[1]++;
        }
        else
        {
            continue;
        }
    }

    cout << arr[0] << " " << arr[1] << endl; 

    return 0;
}