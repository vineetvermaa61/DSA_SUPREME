// //  Boyer-Moore Voting Algorithm to find the majority element

// *****************IMPORTANT******************

// // STEP1: Finding candidate for majority element
// // STEP2: Verify majority element
#include<iostream>
#include<vector>
using namespace std;
    class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int major = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            
            if(nums[i] == major){
                count++;
                major = nums[i];
            }
            else{
                count--;
            }
            if (count == 0)
            {
                count = 1;
                major = nums[i];
            }
        }
        
        int count2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(major == nums[i]){
                count2++;
            }
        }

        if(count2 > nums.size()/2){
            return major;
        }
    return -1;
    }
};
int main(){
    Solution sol;
    vector<int>arr {2,2,1,1,1,2,2};
    cout<<sol.majorityElement(arr)<<" "<<endl;
    return 0;
}