#include <iostream>
#include <stack>

using namespace std;

stack<int> copy(stack<int> &input)
{
    stack<int> temp;
    while (!input.empty())
    {
        temp.push(input.top());
        input.pop();
    }

    stack<int> result;
    while (!temp.empty())
    {
        result.push(temp.top());
        temp.pop();
    }
    return result;
}

int main()
{
    stack<int> input;
    input.push(1);
    input.push(2);
    input.push(3);
    input.push(4);
    input.push(5);

    stack<int> result = copy(input);

    while (!result.empty())
    {
        cout << result.top() << " ";
        result.pop();
    }

    return 0;
}