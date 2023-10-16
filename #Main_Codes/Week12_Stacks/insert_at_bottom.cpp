#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void solve(stack<int> &s, int target)
{
    // base case
    if (s.empty())
    {
        s.push(target);
        return;
    }

    int temp = s.top();
    s.pop();
    // recursive call
    solve(s, target);
    // backtrack
    s.push(temp);
}

void insertAtBottom(stack<int> &s)
{
    if (s.empty())
    {
        cout << "Stack is empty, there is no elemnt to put at bottom" << endl;
        return;
    }

    int target = s.top();
    s.pop();
    solve(s, target);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    insertAtBottom(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}