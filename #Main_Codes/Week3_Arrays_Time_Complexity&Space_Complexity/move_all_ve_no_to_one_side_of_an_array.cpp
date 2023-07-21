#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        // void moveAll(vector<int>& nums){
        //     int l =0, h = nums.size()-1;
        //     while(l<=h){
        //         if(nums[l]>=0){
        //             swap(nums[l],nums[h]);
        //             h--;
        //         }else{
        //             l++;
        //         }
        //     }
        // }
        void moveAll(vector<int>& nums){
            int l =0, h = nums.size()-1;
            while(l<h){
                if(nums[l]<0){
                    l++;
                }
                else if(nums[h]>0){
                    h--;
                }
                else{
                    swap(nums[l],nums[h]);
                }
            }
        }
};
int main(){
    vector<int> nums{2,-1,-22,10,-3,0,23,56,-999};
    Solution sol;
    sol.moveAll(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<< " ";
    }
    cout<<endl;
    return 0;
}