#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void interleave(queue<int> &q)
{
    int count = 0;
    int n = q.size();
    // step A: seperate both halfes
    queue<int> q2;
    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        q2.push(element);
        count++;
        if (count == n / 2)
        {
            break;
        }
    }
    // step B: interleaving start kardo
    while (!q.empty() && !q2.empty())
    {
        int first = q2.front();
        q2.pop();
        q.push(first);
        int second = q.front();
        q.pop();
        q.push(second);
    }
    // odd wala case
    if (n & 1)
    {
        int element = q.front();
        q.pop();
        q.push(element);
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
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    interleave(q);
    printQueue(q);
    return 0;
}