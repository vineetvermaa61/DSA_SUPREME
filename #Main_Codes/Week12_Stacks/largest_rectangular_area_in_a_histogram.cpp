#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution
{
public:
    vector<int> nextSmaller(vector<int> &heights)
    {
        stack<int> st;
        st.push(-1);
        vector<int> next(heights.size());
        for (int i = heights.size() - 1; i >= 0; i--)
        {
            int curr = heights[i];
            // aapka ans stack mein
            while (st.top() != -1 && heights[st.top()] >= curr)
            {
                st.pop();
            }
            // chota element mil chuka hai -> ans store
            next[i] = st.top();
            // push kardo index ko
            st.push(i);
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
            while (st.top() != -1 && heights[st.top()] >= curr)
            {
                st.pop();
            }
            // chota element mil chuka hai -> ans store
            prev[i] = st.top();
            // push kardo index ko
            st.push(i);
        }
        return prev;
    }
    int largestRectangleArea(vector<int> &heights)
    {
        int size = heights.size();
        // prev smaller elements nikal lo
        vector<int> prev = prevSmaller(heights);
        // next smaller elements nikal lo
        vector<int> next = nextSmaller(heights);

        int maxArea = INT_MIN;
        for (int i = 0; i < heights.size(); i++)
        {
            int length = heights[i];
            if (next[i] == -1)
            {
                next[i] = size;
            }
            int width = next[i] - prev[i] - 1;
            int area = length * width;
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    Solution sol;
    int ans = sol.largestRectangleArea(v);
    cout << "Area is " << ans << " ";
    cout << endl;
    return 0;
}