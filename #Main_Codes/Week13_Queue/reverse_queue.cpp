#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
// Iterative
void reverseQueue(queue<int> &q)
{
    stack<int> s;
    // STEP1: pop all elements from stack s
    while (!q.empty())
    {
        int temp = q.front();
        s.push(temp);
        // kyonki deletion front se hoga
        q.pop();
    }
    // STEP2: put all elements from stack into q
    while (!s.empty())
    {
        int topElement = s.top();
        q.push(topElement);
        s.pop();
    }
}

// recursive
void reverseQueueRecursive(queue<int> &q)
{
    // base case
    if (q.empty())
    {
        return;
    }
    // 1 case
    int temp = q.front();
    // kyonki deletion front se hoga
    q.pop();
    // recursive call
    reverseQueueRecursive(q);
    q.push(temp);
}

void printQueue(queue<int> &q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);
    // reverseQueue(q);
    reverseQueueRecursive(q);
    printQueue(q);
    return 0;
}