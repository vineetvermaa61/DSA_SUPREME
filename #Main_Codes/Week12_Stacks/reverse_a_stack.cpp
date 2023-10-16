#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int target)
{
    // base case
    if (s.empty())
    {
        s.push(target);
        return;
    }

    // jab tak stack khali nahin ho raha tab tak stack se elements nikalte ja rahe aur us element ko store kar rahe
    int temp = s.top();
    s.pop();
    // recursive call
    insertAtBottom(s, target);
    // backtrack
    s.push(temp);
}

void reverseStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int target = s.top();
    s.pop();
    // reverse stack
    reverseStack(s);
    // isert at bottom target ko
    insertAtBottom(s, target);
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

    reverseStack(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}