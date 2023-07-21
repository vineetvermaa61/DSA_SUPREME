#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// // BETTER SOLUTION:
// class Solution
// {
// public:
//     string addStrings(string num1, string num2)
//     {
//         string ans = "";
//         int i = num1.size() - 1;
//         int j = num2.size() - 1;
//         int carry = 0;
//         while (i >= 0 || j >= 0)
//         {
//             int n1 = (i >= 0 ? num1[i] : '0') - '0';
//             int n2 = (j >= 0 ? num2[j] : '0') - '0';
//             int x = (n1 + n2) + carry;
//             int digit = x % 10;
//             carry = x / 10;
//             ans.push_back(digit + '0');
//             i--;
//             j--;
//         }
//         while (carry)
//         {
//             int digit = carry % 10;
//             ans.push_back(digit + '0');
//             carry = carry / 10;
//         }
//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     string addStrings(string num1, string num2)
//     {
//         string ans = "";
//         int i = num1.size() - 1;
//         int j = num2.size() - 1;
//         int carry = 0;
//         while (i >= 0 && j >= 0)
//         {
//             int n1 = num1[i] - '0';
//             int n2 = num2[j] - '0';
//             int x = (n1 + n2) + carry;
//             int digit = x % 10;
//             carry = x / 10;
//             ans.push_back(digit + '0');
//             i--;
//             j--;
//         }
//         while (i >= 0)
//         {
//             int n1 = num1[i] - '0';
//             int x = (n1) + carry;
//             int digit = x % 10;
//             carry = x / 10;
//             ans.push_back(digit + '0');
//             i--;
//         }
//         while (j >= 0)
//         {
//             int n2 = num2[j] - '0';
//             int x = (n2) + carry;
//             int digit = x % 10;
//             carry = x / 10;
//             ans.push_back(digit + '0');
//             j--;
//         }
//         while (carry)
//         {
//             int digit = carry % 10;
//             ans.push_back(digit + '0');
//             carry = carry / 10;
//         }
//         // while (ans[ans.size() - 1] == '0')
//         // {
//         //     ans.pop_back();
//         // }
//         // reverse(ans.begin(), ans.end());
//         int s = 0;
//         int e = ans.size() - 1;
//         while (s <= e)
//         {
//             swap(ans[s], ans[e]);
//             s++;
//             e--;
//         }
//         return ans;
//     }
// };

// // PASS BY VALUE - RE:
// class Solution
// {
// public:
//     string addRE(string num1, int p1, string num2, int p2, int carry = 0)
//     {
//         // base case
//         if (p1 < 0 && p2 < 0)
//         {
//             if (carry != 0)
//             {
//                 return string(1, carry + '0');
//             }
//             return "";
//         }

//         // 1 case solve kar do
//         int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
//         int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
//         int csum = n1 + n2 + carry;
//         string ans = "";
//         int digit = csum % 10;
//         ans.push_back(digit + '0');
//         carry = csum / 10;

//         // RE
// //  kyoni copy create ho rahi isliye har baar naye answer ko purane answer mein jodna pad raha hai
//         ans += addRE(num1, p1 - 1, num2, p2 - 1, carry);
//         return ans;
//     }
//     string addStrings(string num1, string num2)
//     {
//         string ans = addRE(num1, num1.size() - 1, num2, num2.size() - 1);
//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// };

// PASS BY REFERENCE - RE:
class Solution
{
public:
    void addRE(string &ans, string &num1, int p1, string &num2, int p2, int carry = 0)
    {
        // base case
        if (p1 < 0 && p2 < 0)
        {
            if (carry != 0)
            {
                ans.push_back(carry + '0');
            }
            return;
        }

        // 1 case solve kar do
        int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
        int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
        int csum = n1 + n2 + carry;
        int digit = csum % 10;
        ans.push_back(digit + '0');
        carry = csum / 10;

        // RE
        addRE(ans, num1, p1 - 1, num2, p2 - 1, carry);
    }
    string addStrings(string num1, string num2)
    {
        string ans = "";
        addRE(ans, num1, num1.size() - 1, num2, num2.size() - 1);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{
    Solution sol;
    // string s = sol.addStrings("11", "123");
    // string s = sol.addStrings("456", "77");
    string s = sol.addStrings("0", "0");
    cout << s << endl;

    return 0;
}