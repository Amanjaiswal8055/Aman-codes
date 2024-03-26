#include <iostream>
#include <array>

using namespace std;

void reverse(string str)
{
    if (str.length() == 0)
    {
        return;
    }
    reverse(str.substr(1));
    cout << str[0];
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    reverse(str);

    return 0;
}
