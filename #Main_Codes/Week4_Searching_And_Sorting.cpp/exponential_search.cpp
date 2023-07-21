#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<set>
using namespace std;
class Solution {
public:

    int bs(vector<int>&arr, int start, int end, int target){
        while(start <= end){
            int mid = start + (end-start)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]<target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }

    int exponential_search(vector<int>&arr, int target){
        int n = arr.size();
        if(arr[0] == target){
            return 0;
        }
        int i = 1;
        while(i < n && arr[i]<=target){
            i = i*2;
        }
        return bs(arr, i/2, min(i,n), target);
    }
    
};
int main(){
    vector<int> arr{1,2,3,4,5,6,7,8,11,13,14,15,56,70};
    Solution sol;
    int target = 13;
    int x = sol.exponential_search(arr,target);
    cout<<"Index: "<<x<<endl;

    return 0;
}