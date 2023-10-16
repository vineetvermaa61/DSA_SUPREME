// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;
// void place(stack<int> &stack, int &target)
// {
//     // base case
//     if (stack.empty())
//     {
//         stack.push(target);
//         return;
//     }
//     if (target >= stack.top())
//     {
//         stack.push(target);
//         return;
//     }
//     int topElement = stack.top();
//     stack.pop();
//     place(stack, target);
//     stack.push(topElement);
// }
// void sortStack(stack<int> &stack)
// {
//     if (stack.empty())
//     {
//         return;
//     }
//     int target = stack.top();
//     stack.pop();
//     sortStack(stack);
//     place(stack, target);
// }
// int main()
// {

//     return 0;
// }

#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void insertSorted(stack<int> &st, int &topElement)
{
    // base case
    if (st.empty())
    {
        st.push(topElement);
        return;
    }
    if (st.top() >= topElement)
    {
        st.push(topElement);
        return;
    }
    int element = st.top();
    st.pop();
    insertSorted(st, topElement);
    st.push(element);
}
void sortStack(stack<int> &st)
{
    // base case
    if (st.empty())
    {
        return;
    }
    int topElement = st.top();
    st.pop();
    // recursive call
    sortStack(st);
    // backtrack
    insertSorted(st, topElement);
    // st.push(topElement);
}
int main()
{
    stack<int> st;
    st.push(5);
    st.push(7);
    st.push(9);
    st.push(1);
    sortStack(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}