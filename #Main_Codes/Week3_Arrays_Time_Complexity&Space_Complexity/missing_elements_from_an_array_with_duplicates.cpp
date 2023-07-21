#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    class Solution{
        public:
            // // VISITED METHOD
            // void findMissing(vector<int>& nums){
            //     for (int i = 0; i < nums.size(); i++)
            //     {
            //         int index = abs(nums[i]);
            //         if(nums[index-1]>0){
            //             nums[index-1] *= -1;
            //         }
            //     }
                
            //     for (int i = 0; i < nums.size(); i++)
            //     {
            //         if(nums[i]>0){
            //             cout<<i+1<<" ";
            //         }
            //     }
                
            // }

            // SORTING + SWAPPING
            void findMissing2(vector<int>& nums){
                int i = 0;
                while(i<nums.size()){
                    int index = nums[i]-1;
                    if(nums[i] != nums[index]){
                        swap(nums[i],nums[index]);
                    }
                    else{
                        i++;
                    }
                }
                
                for (int i = 0; i < nums.size(); i++)
                {
                    if(nums[i] != i+1){
                        cout<<i+1<<" ";
                    }
                }
                
            }
    };
int main(){
    vector<int> nums{1,3,4,2,2};
    Solution sol;
    // sol.findMissing(nums);
    sol.findMissing2(nums);
    return 0;
}