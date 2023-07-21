#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void robSolution(vector<int> &nums, int i, int sum, int &maxi)
    {
        // base case
        if (i >= nums.size())
        {
            maxi = max(sum, maxi);
            return;
        }
        // include
        robSolution(nums, i + 2, sum + nums[i], maxi);
        // exclude
        robSolution(nums, i + 1, sum, maxi);
    }
    int rob(vector<int> &nums)
    {
        int i = 0;
        int sum = 0;
        int maxi = INT_MIN;
        robSolution(nums, i, sum, maxi);
        return maxi;
    }
};

// class Solution {
// public:
//     int robHelper(vector<int>& nums, int i){
//         // base case
//         if(i >= nums.size()){
//             return 0;
//         }

//         int robAmount1 = nums[i] + robHelper(nums,i+2);
//         int robAmount2 = 0 + robHelper(nums,i+1);
//         return max(robAmount1, robAmount2);
//     }
//     int rob(vector<int>& nums) {
//         return robHelper(nums,0);
//     }
// };
int main()
{

    return 0;
}