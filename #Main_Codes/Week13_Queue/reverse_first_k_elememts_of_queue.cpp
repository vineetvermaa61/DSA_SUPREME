#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
void reverseFirstKElements(queue<int> &q, int k)
{
    int n = q.size();
    // EDGE CASE:
    // if (k == 0 || k == n)
    // {
    //     return;
    // }
    if (k == 0)
    {
        return;
    }
    // STEP1: queue -> k elements -> stack
    int count = 0;
    stack<int> s;
    while (!q.empty())
    {
        int temp = q.front();
        s.push(temp);
        q.pop();
        count++;
        if (count == k)
        {
            break;
        }
    }
    // stepB: q mein wapas
    while (!s.empty())
    {
        int element = s.top();
        q.push(element);
        s.pop();
    }
    int count2 = 0;
    // push n-k elements from queue front to back
    while (!q.empty() && n - k != 0)
    {
        int temp2 = q.front();
        q.pop();
        q.push(temp2);
        count2++;
        if (count2 == n - k)
        {
            break;
        }
    }
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
    int k = 3;
    // printQueue(q);
    reverseFirstKElements(q, k);
    printQueue(q);
    return 0;
}