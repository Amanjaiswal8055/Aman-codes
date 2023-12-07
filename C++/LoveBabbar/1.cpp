#include <iostream>
using namespace std;

int main()
{

    char ch;

    cout << "Enter character\n";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Given character is in lowercase." << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Given character is in uppercase." << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "Given character is a number." << endl;
    }

    return 0;
}