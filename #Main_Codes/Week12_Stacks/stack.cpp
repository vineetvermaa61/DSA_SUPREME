#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    // create stack
    stack<int> st;

    // insert in stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // remove from stack
    st.pop();

    // size of stack
    cout << "size of stack is: " << st.size() << endl;

    // peek/ check element on top
    cout << "Top element of stack is: " << st.top() << endl;

    // isEmpty?
    if (st.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    // printing stack
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}