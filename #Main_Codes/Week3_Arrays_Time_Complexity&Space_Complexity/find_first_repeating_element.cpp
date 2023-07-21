// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<map>
#include <bits/stdc++.h>
using namespace std;
    class Solution{
        public:
            // BRUTE FORCE
            // int firstOccur(vector<int>& nums){
            //     for (int i = 0; i < nums.size(); i++)
            //     {
            //         for (int j = i+1; j < nums.size(); j++)
            //         {
            //             if(nums[i] == nums[j]){
            //                 return i+1;
            //             }
            //         }
            //     }
            //     return -1;
            // }


            // // OPTIMIZED METHOD USING STL MAP
            // int firstOccur(vector<int>& nums){
            //     unordered_map<int,int> hash;
            //     for (int i = 0; i < nums.size(); i++)
            //     {
            //        hash[nums[i]]++;
            //     }
            //     for (int i = 0; i < nums.size(); i++)
            //     {
            //         if(hash[nums[i]]>1){
            //             return i+1;
            //         }
            //     }
            //     return -1;
            // }

            // OPTIMIZED METHOD USING COUNT SORT TECHNIQUE
            int firstOccur(vector<int>& nums){
                vector<int> hash(nums.size(),0);
                for (int i = 0; i < nums.size(); i++)
                {
                   hash[nums[i]]++;
                }
                // for(int i = 0; i < nums.size(); i++)
                // {
                //    cout<<hash[i]<<" ";
                // }
                for (int i = 0; i < nums.size(); i++)
                {
                    if(hash[nums[i]]>1){
                        return i+1;
                    }
                }
                return -1;
            }
    };
int main(){
    vector<int> nums{1,3,4,2,6,7,8,6,2};
    // vector<int> nums{1,3,2,2};
    Solution sol;
    cout<<sol.firstOccur(nums);
    return 0;
}