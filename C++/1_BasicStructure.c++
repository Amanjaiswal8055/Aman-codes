#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    int a, num = 9;
    num = num & 5;

    string fname = "Aman";
    string mname = "Kumar";

    string fullname = fname + " " + mname;

    a = strlen(fname);


    // fname.append(mname);

    cout << a << endl;

    return 0;
}

