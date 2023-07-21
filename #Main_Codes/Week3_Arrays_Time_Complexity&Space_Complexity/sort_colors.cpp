#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
    //  sort(nums.begin(),nums.end());

    // int zeros,ones,twos;
    //     zeros = ones =  twos = 0;

    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         if(nums[i] == 0){
    //             zeros++;
    //         }
    //         else if(nums[i] == 1){
    //             ones++;
    //         }
    //         else{
    //             twos++;
    //         }
    //     }

    // OR

    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         while(zeros--){
    //             nums[i] = 0;
    //             i++;
    //         }
    //         while(ones--){
    //             nums[i] = 1;
    //             i++;
    //         }
    //         while(twos--){
    //             nums[i] = 2;
    //             i++;
    //         }
    //     }
        
    int l =0, m = 0, h = nums.size()-1;
        while(m<=h){
            if(nums[m] == 0){
                swap(nums[l],nums[m]);
                l++,m++;
            }
            else if(nums[m] == 1){
                m++;
            }
            else{
                swap(nums[m],nums[h]);
                h--;
            }
        }

    }
};
int main(){
    vector<int> nums{2,0,2,1,1,0};
    Solution sol;
    sol.sortColors(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<< " ";
    }
    cout<<endl;
    
    return 0;
}