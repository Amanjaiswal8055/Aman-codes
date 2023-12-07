#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> a;

    a.push_back(12);
    a.push_back(1252);
    a.push_back(13241);
    a.push_back(131);
    a.push_back(241);
    a.pop_back();

    cout << "Capacity " << a.capacity() << endl;
    cout << "size " << a.size() << endl;
    cout << "First element " << a.front() << endl;
    cout << "Last element " << a.back() << endl;
    cout << "At index " << a.at(0) << endl;

    for (int i: a)
    {
        cout << i << " " ;
    }
    cout << endl;
    

    return 0;
}