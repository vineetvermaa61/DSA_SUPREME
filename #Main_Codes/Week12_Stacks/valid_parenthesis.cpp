#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            // opening bracket
            char currChar = s[i];
            if (currChar == '(' || currChar == '{' || currChar == '[')
            {
                st.push(currChar);
            }
            else
            {
                // closing bracket
                // EDGE CASE:
                if (!st.empty())
                {
                    if (currChar == ')' && st.top() == '(')
                    {
                        // matching bracket
                        st.pop();
                    }
                    else if (st.top() == '{' && currChar == '}')
                    {
                        // matching bracket
                        st.pop();
                    }
                    else if (st.top() == '[' && currChar == ']')
                    {
                        // matching bracket
                        st.pop();
                    }
                    else
                    {
                        // brackets not matching
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if (st.empty())
        {
            // valid
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{

    return 0;
}