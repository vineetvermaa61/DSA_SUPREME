#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    // creation
    queue<int> q;

    // insertion
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(25);

    // size
    cout << "Size of Queue is:" << q.size() << endl;

    // removal
    q.pop();

    cout << "Size of Queue is:" << q.size() << endl;

    // empty
    if (q.empty())
    {
        cout << "Q is empty" << endl;
    }
    else
    {
        cout << "Q is not empty" << endl;
    }

    // front/back
    cout << "Front element of Queue is: " << q.front() << endl;
    cout << "Back element of Queue is: " << q.back() << endl;

    return 0;
}