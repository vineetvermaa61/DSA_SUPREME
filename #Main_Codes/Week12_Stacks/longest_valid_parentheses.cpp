#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution
{
public:
    int longestValidParentheses(string s)
    {
        stack<int> st; // kyonki index store kar rahe
        st.push(-1);
        int maxLen = 0;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch == '(')
            {
                st.push(i);
            }
            else
            {
                st.pop();
                // EDGE CASE: Invalid wala case
                // yahan stack ke top par bina kuch dale length nikalenge to error ayega, isliye current index dal rahe, kyonki wahin se valid expression ab start hoga
                if (st.empty())
                {
                    st.push(i);
                }
                else
                {
                    int len = i - st.top();
                    maxLen = max(len, maxLen);
                }
            }
        }
        return maxLen;
    }
};
int main()
{

    return 0;
}