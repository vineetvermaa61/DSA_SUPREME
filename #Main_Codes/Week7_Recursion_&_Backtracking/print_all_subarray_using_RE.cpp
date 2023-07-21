#include <iostream>
#include <vector>
using namespace std;
void printSubarray_util(vector<int> &nums, int start, int end)
{
    // base case
    if (end == nums.size())
    {
        return;
    }
    // 1 case solve kar do
    for (int i = start; i <= end; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    // RE
    printSubarray_util(nums, start, end + 1);
}

void printSubarray(vector<int> &nums)
{
    for (int start = 0; start < nums.size(); start++)
    {
        int end = start;
        printSubarray_util(nums, start, end);
    }
}

int main()
{
    // vector<int> arr{1, 2, 3, 4};
    vector<int> arr{1, 2, 3};
    printSubarray(arr);
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution
// {
// public:
//     void printSubarray_util(vector<vector<int>> &ans, vector<int> ans1, vector<int> &nums, int start, int end)
//     {
//         // base case
//         if (end == nums.size())
//         {
//             return;
//         }
//         // 1 case solve kar do
//         for (int i = start; i <= end; i++)
//         {
//             // cout << nums[i] << " ";
//             ans1.push_back(nums[i]);
//         }
//         ans.push_back(ans1);
//         // cout << endl;
//         // RE
//         printSubarray_util(ans, ans1, nums, start, end + 1);
//     }
//     vector<vector<int>> subsets(vector<int> &nums)
//     {
//         vector<vector<int>> ans;
//         vector<int> ans1;
//         for (int start = 0; start < nums.size(); start++)
//         {
//             int end = start;
//             printSubarray_util(ans, ans1, nums, start, end);
//         }
//         return ans;
//     }
// };
// int main()
// {
//     vector<int> arr{1, 2, 3, 4};
//     Solution sol;
//     sol.subsets(arr);
//     return 0;
// }