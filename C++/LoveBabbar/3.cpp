#include <iostream>
using namespace std;

int main()
{

    int n;
    int m , count = 1;

    cout << "Enter the value of n" << endl;
    cin >> n;

    m = n;
    while (m != 2)
    {
        m = m / 2;
        if (m % 2 == 1)
        {
            cout << "Not a power of 2\n";
            return 0;
        }
        count++;
    }

    cout << n << " can be written as power of 2\n";

    return 0;
}