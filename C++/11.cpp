#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int N;
    int count = 0;
    cin >> N;

    stack<string> S;
    for (int i = 0; i < N; i++)
    {
        string x;
        cin >> x;
        S.push(x);
    }

    string color;
    cin >> color;

    bool flag = false;

    for (int i = 0; i < N; i++)
    {
        if (color == S.top())
        {
            flag = true;
            break;
        }
        else
        {
            S.pop();
            count++;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    cout << count << endl;
    return 0;
}