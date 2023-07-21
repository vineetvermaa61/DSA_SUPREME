#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<set>
using namespace std;
class Solution {
public:
    
    int bs(vector<int>&nums, int start, int target){
            int end = nums.size()-1;
            while(start<=end){
                int mid = start + (end-start)/2;
                if(nums[mid] == target){
                    return mid;
                }
                else if(nums[mid] < target){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
            return -1;
        }

    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>>ans;

        // // TWO POINTER APPROACH:
        // int i = 0, j = 1;
        // while(j<nums.size()){
        //     int diff = nums[j]-nums[i];
        //     if(diff == k){
        //         ans.insert({nums[i],nums[j]});
        //         i++;
        //         j++;
        //     }else if(diff>k){
        //         i++;
        //     }
        //     else{
        //         j++;
        //     }
        //     if(i==j){
        //         j++;
        //     }
        // }

        // // BINARY SEARCH APPROACH:
        for(int i = 0; i < nums.size(); i++){
            if(bs(nums, i+1, nums[i]+k) != -1){
                ans.insert({nums[i],nums[i]+k});
            }
        }

        return ans.size();
    }
};
int main(){
    vector<int> arr{3,1,4,1,5};
    Solution sol;
    int k = 2;
    int x = sol.findPairs(arr,k);
    cout<<x<<endl;
    return 0;
}