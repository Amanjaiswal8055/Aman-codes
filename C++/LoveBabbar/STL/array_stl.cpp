#include <iostream>
#include <array>

using namespace std;

int main()
{

    int arr[10] = {123, 6, 5, 10, 89, 20, 1, 23, -32, -55};
    array<int, 10> a = {123, 6, 0, 10, 89, 20, 1, 23, -32, -55};

    cout << "size of array " << a.size() << endl;
    cout << "Starting element of array " << a.front() << endl;
    cout << "last element of array " << a.back() << endl;
    cout << "empty or not " << a.empty() << endl;

    return 0;
}