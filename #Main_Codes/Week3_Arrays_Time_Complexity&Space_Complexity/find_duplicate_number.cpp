#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // METHOD-1: SORTING METHOD:
        // sort(nums.begin(),nums.end());
        // for(int i = 0;i<nums.size()-1;i++){  // i<nums.size()-1  ==> because i = i+1
        //     if(nums[i]==nums[i+1]){
        //         return nums[i+1];
        //     }
        // }
        // return -1;

        // METHOD-2: NEGATIVE MARKING METHOD:
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     int index = abs(nums[i]);
        //     if(nums[index]<0){
        //         return index;
        //     }
        //         nums[index] *= -1;
        // }
        // return -1;

        // METHOD-3: PLACING INDEXES AT RIGHT PLACE:
        while(nums[0] != nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
    }
};
int main(){
    vector<int> nums{1,3,4,2,2};
    Solution sol;
    cout<<sol.findDuplicate(nums);
    return 0;
}