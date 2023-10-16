#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> nextSmaller(vector<int> &heights)
{
    stack<int> st;
    st.push(-1);
    vector<int> next(heights.size());
    for (int i = heights.size() - 1; i >= 0; i--)
    {
        int curr = heights[i];
        // while (st.top() != -1 && heights[st.top()] >= curr)
        while (st.top() >= curr)
        {
            st.pop();
        }
        next[i] = st.top();
        st.push(curr);
    }
    return next;
}
vector<int> prevSmaller(vector<int> &heights)
{
    stack<int> st;
    st.push(-1);
    vector<int> prev(heights.size());
    for (int i = 0; i < heights.size(); i++)
    {
        int curr = heights[i];
        // aapka ans stack mein
        while (st.top() >= curr)
        {
            st.pop();
        }
        // chota element mil chuka hai -> ans store
        prev[i] = st.top();
        // push kardo index ko
        st.push(curr);
    }
    return prev;
}
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    vector<int> ans = nextSmaller(v);
    // vector<int> ans = prevSmaller(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}