#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void solve(vector<string> &ans, int open, int close, string output)
    {
        // base case
        if (open == 0 && close == 0)
        {
            ans.push_back(output);
            return;
        }

        // 1 case solve kar do, baaki recursion sambhal lega
        if (open > 0)
        {   // if open available
            // include open bracket
            // output.push_back('(');
            solve(ans, open - 1, close, output + '(');
            // backtrack
            // output.pop_back();
        }
        if (close > open)
        {   // agar bache hue close brackets open se jyada h
            // include close bracket
            // output.push_back(')');
            solve(ans, open, close - 1, output + ')');
            // backtrack
            // output.pop_back();
        }
    }
    vector<string> generateParenthesis(int n)
    {
        int open = n;
        int close = n;
        vector<string> ans;
        string output = "";
        solve(ans, open, close, output);
        return ans;
    }
};
int main()
{

    return 0;
}