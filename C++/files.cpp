#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
    ofstream MyFile("Aman.txt");
    // ofstream MyFile("test.txt");

    MyFile << "My name is Aman Jaiswal! I am a student of Computer Science and Engineering at IPS Academy Indore. I am a 2nd year student." << endl;

    MyFile.close();

    ifstream MyReadFile("Aman.txt");

    string myText;

    while (getline(MyReadFile, myText))
    {
        cout << myText << endl;
    }

    MyFile.close();

    return 0;
}