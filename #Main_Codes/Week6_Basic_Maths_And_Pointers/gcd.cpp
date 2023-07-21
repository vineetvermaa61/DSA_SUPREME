#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:

    int findMin(vector<int>& nums){
        int mini = INT_MAX;
        for(int i = 0; i < nums.size() ; i++){
            mini = min(nums[i],mini);
        }
        return mini;
    }

    int findMax(vector<int>& nums){
        int maxi = INT_MIN;
        for(int i = 0; i < nums.size() ; i++){
            maxi = max(nums[i],maxi);
        }
        return maxi;
    }

    int findGCD(vector<int>& nums) {
        int a = findMin(nums);
        // cout<<"a"<<a<<endl;
        int b = findMax(nums);
        // cout<<"b"<<b<<endl;
        if(a == 0){
            return b;
        }
        if(b == 0){
            return a;
        }
        while(a>0 && b>0){
            if(a>b){
                a = a-b;
            }else{
                b = b-a;
            }
        }
        return (a == 0) ? b : a;
    }
};
int main(){
    vector<int> arr {2,4,6,10};
    Solution sol;
    cout<<sol.findGCD(arr);
    return 0;
}