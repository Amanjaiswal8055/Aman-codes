#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < N; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                cout << "No";
                goto end;
            }
        }
        cout << "Yes";
    end:
        cout << endl;
    }

    return 0;
}