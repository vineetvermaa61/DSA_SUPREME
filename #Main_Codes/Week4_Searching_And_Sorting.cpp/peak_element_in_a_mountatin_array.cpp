#include<iostream>
#include<vector>
// 0 10 5 2   output: 10
using namespace std;
// *************************MOST MOST IMPORTANT***************************
// *************************ASKED IN INTERVIEWS***************************
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-1;
        int mid = s+ (e-s)/2;
        while(s<e){
            if(arr[mid] < arr[mid+1]){
                s = mid + 1;
            }else{
                e = mid;
            }
            mid = s+ (e-s)/2;
        }
        return s;
    }
};
int main(){
    vector<int> ans{0,10,5,2};
    Solution sol;
    int index = sol.peakIndexInMountainArray(ans);
    cout<<"Peak Index: "<<index<<endl;
    return 0;
}