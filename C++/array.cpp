#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {15, 62, 8, 43, 859, 86};

    int length = arr.size();

    int rotation;
    cout << "Enter number of rotations: ";  
    cin >> rotation;

    rotation = rotation % length;
    
    while(rotation)
    {
        int temp = arr[length - 1];

        for(int i = length - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;
        rotation--;
    }

    for(int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}