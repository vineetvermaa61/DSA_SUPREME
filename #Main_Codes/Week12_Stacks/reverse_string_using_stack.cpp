#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    string str = "babbar";
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        st.push(str[i]);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}