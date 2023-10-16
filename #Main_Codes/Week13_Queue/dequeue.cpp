#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_front(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_back(40);
    // 20 10 30 40
    cout << "Size of deque is: " << dq.size() << endl;

    dq.pop_back();
    cout << "Size of deque is: " << dq.size() << endl;
    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;

    dq.pop_front();
    cout << "Size of deque is: " << dq.size() << endl;
    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;

    if (dq.empty())
    {
        cout << "Queue is empty " << endl;
    }
    else
    {
        cout << "Queue is NOT empty " << endl;
    }

    return 0;
}