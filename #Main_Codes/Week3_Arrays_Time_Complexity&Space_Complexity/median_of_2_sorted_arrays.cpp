#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// *******************FIRST LEETCODE HARD QUESTION SOLVED***********************
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        double start = 0;
        double end = ans.size()-1;
        int mid1 = start+(end-start)/2;
        // cout<<"Mid1: "<<mid1<<endl;
        double mid2 = start+(end-start)/2;
        // cout<<"Mid2: "<<mid2<<endl;
        if(mid1 < mid2){
            double median = (ans[mid1]+ans[mid1+1])/2;
            // cout<<"If: "<<median<<endl;
            return median;
        }
        double median = ans[mid1];
        return median;
    }
};
int main(){
    Solution sol;
    // vector<int> nums1{1,2};
    // vector<int> nums2{3,4};
    vector<int> nums1{1,3};
    vector<int> nums2{2};
    double x = sol.findMedianSortedArrays(nums1,nums2);
    cout<<"Median: "<<x<<endl;
    
    return 0;
}