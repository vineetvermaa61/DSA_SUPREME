#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> plusOne(vector<int> &digits)
{
    vector<int> ans;
    // reverse(digits.begin(), digits.end());
    int i = digits.size() - 1;
    int sum = 0;
    int carry = 0;

    while (i >= 0)
    {
        if (i == digits.size() - 1)
        {
            sum = carry + digits[i] + 1;
        }
        else
        {
            sum = carry + digits[i];
        }
        int digit = sum % 10;
        carry = sum / 10;
        // digits[i] = digit;
        ans.push_back(digit);
        i--;
    }
    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        carry = sum / 10;
        ans.push_back(digit);
        // digits[i] = digit;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
// vector<int> plusOne(vector<int> &digits)
// {
//     vector<int> ans;
//     reverse(digits.begin(), digits.end());
//     int i = 0;
//     int sum = 0;
//     int carry = 0;
//     while (i < digits.size())
//     {
//         if (i == 0)
//         {
//             sum = carry + digits[i] + 1;
//         }
//         else
//         {
//             sum = carry + digits[i];
//         }
//         int digit = sum % 10;
//         ans.push_back(digit);
//         i++;
//         carry = sum / 10;
//     }
//     while (carry)
//     {
//         int sum = carry;
//         int digit = sum % 10;
//         carry = sum / 10;
//         ans.push_back(digit);
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }
int main()
{
    // vector<int> arr = {1, 2, 3};
    vector<int> arr = {9};
    vector<int> ans = plusOne(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}