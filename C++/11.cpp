#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

// void myFunction(int myNumbers[]);

using namespace std;

int main()
{
    string myText;

    ofstream MyFile("test.txt");

    MyFile << "Files can be tricky, but it is fun enough!";
    MyFile.close();

    ifstream MyReadFile("test.txt");

    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }

    MyReadFile.close();

    return 0;
}
// string firstName = "John ";
// string lastName = "Doe";

// string fullName = firstName.append(lastName);

// string paragraph;

// getline(cin, paragraph);

// double a = sqrt(644);

// cout <<  sqrt(64) << endl;
// cout << a << endl;

// cout << (10 + 2 * 20 == 50) << endl;

// bool ships[4][4] = {
//     {0, 1, 1, 0},
//     {0, 0, 0, 0},
//     {0, 0, 1, 0},
//     {0, 0, 1, 0}};

// int hits = 0;
// int numberOfTurns = 0;

// while (hits < 4)
// {
//     int row, column;

//     cout << "Selecting coordinates\n";

//     cout << "Choose a row number between 0 and 3: ";
//     cin >> row;

//     cin >> column;

//     if (ships[row][column])
//     {
//         ships[row][column] = 0;

//         hits++;

//         cout << "Hit! " << (4 - hits) << " left.\n\n";
//     }
//     else
//     {
//         cout << "Miss\n\n";
//     }

//     numberOfTurns++;
// }

// cout << "Victory!\n";
// cout << "You won in " << numberOfTurns << " turns" << endl;

//  struct details
// {
//     string name;
//     int age;
//     string address;
// } ;

// details person;

// person.name = "John";
// person.age = 20;
// person.address = "123 Street";

// cout << person.name << endl;
// cout << person.age << endl;
// cout << person.address << endl;

// int a = 10;
// int *b = &a;

// cout << a << endl;
// cout << b << endl;
// cout << &b << endl;

// string morning = "poha";
// string morning1 = "samosa";
// string &breakfast = morning;
// breakfast = morning1;

// cout << breakfast << endl;

// int arr[] = {17, 72, 43, 84, 965};

// for (int i : arr)
// {
//     cout << i << "\n";
// }

// class Car
// {                                   // The class
// public:                             // Access specifier
//     string brand;                   // Attribute
//     string model;                   // Attribute
//     int year;                       // Attribute
//     Car(); // Constructor declaration
// };

// Car::Car()
// {
// cout << "Constructor called\n";
// brand = "aaa";
// model = "Tata";
// year = 2020;
// }

// int main()
// {
// Car carObj1;
// Car carObj2;

// carObj1.brand = "BMW";
// carObj1.model = "X5";
// carObj1.year = 1999;

// carObj2.brand = "Tata";
// carObj2.model = "Nexon";
// carObj2.year = 2020;

// cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
// cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

// }