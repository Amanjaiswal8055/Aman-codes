#include <stdio.h>
#include <iostream>

using namespace std;

string swap(string s, int positionChangefrom, int positionChangeto)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[positionChangefrom] < s[i])
        {
            int temp = s[positionChangefrom];
            s[positionChangefrom] = s[positionChangeto];
            s[positionChangeto] = temp;
        }
    }
    return s;
}

int main()
{
    string s;
    int n = s.length();

    int positionChange, numberOfSwaps;
    cout << "Enter the string: " << endl;
    cin >> s;
    cout << "Enter the number of position changes and number of swaps: " << endl;
    cin >> positionChange >> numberOfSwaps;

    int temp = positionChange;

    for (int i = 0; i < numberOfSwaps; i++)
    {
        s = swap(s, positionChange - 1, temp - 2);
        temp--;
    }

    cout << s[positionChange - 1] << endl;
    return 0;
}
