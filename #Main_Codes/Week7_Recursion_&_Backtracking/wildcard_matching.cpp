#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool isMatchHelper(string &s, int si, string &p, int pi)
    {
        // base case
        if (si == s.size() && pi == p.size())
        {
            return true;
        }
        if (si == s.size() && pi < p.size())
        {
            while (pi < p.size())
            {
                if (p[pi] != '*')
                {
                    return false;
                }
                pi++;
            }
            return true;
        }

        // single charactor match
        if (s[si] == p[pi] || '?' == p[pi])
        {
            return isMatchHelper(s, si + 1, p, pi + 1);
        }

        if (p[pi] == '*')
        {
            // '*' can be null or empty
            bool caseA = isMatchHelper(s, si, p, pi + 1);
            // '*' will consume 1 charactor of string s
            bool caseB = isMatchHelper(s, si + 1, p, pi);
            return caseA || caseB;
        }
        // match doesn't found
        return false;
    }
    bool isMatch(string s, string p)
    {
        int si = 0; // index pointer to string s
        int pi = 0; // index pointer to string p
        return isMatchHelper(s, si, p, pi);
    }
};
int main()
{
    Solution sol;
    if (sol.isMatch("abcdefgh", "ab?*f?**"))
    {
        cout << "Matched" << endl;
    }
    else
    {
        cout << "NOT Matched" << endl;
    }
    return 0;
}