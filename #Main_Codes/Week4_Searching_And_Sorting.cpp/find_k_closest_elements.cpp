#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<set>
using namespace std;
// 2 POINTER APPROACH:
class Solution {
public:

    int lowerBound(vector<int>&arr, int x){
        int s = 0;
        int e = arr.size()-1;
        int ans = e;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(arr[mid] >= x){
                ans = mid;
                e = mid - 1;
            }
            else if(arr[mid] < x){
                s = mid+1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
    }

    vector<int> BS_Method(vector<int>& arr, int k, int x) {
        int h = lowerBound(arr,x);
        cout<<"h "<<h<<endl;
        int l = h-1;
        while(k--){
            if(l<0){
                h++;
                // cout<<"1"<<endl;
            }
            else if(h>arr.size()-1){
                cout<<"high "<<h<<"\nsize "<<arr.size()<<endl;
                // cout<<"2"<<endl;
                l--;
            }
            else if(x-arr[l] > arr[h]-x){
                h++;
                // cout<<"3"<<endl;
            }
            else{
                l--;
            }
        }

        vector<int> ans;
        for(int i = l+1; i<=h-1; i++){
            ans.push_back(arr[i]);
        }
        return ans;

        // return vector<int>(arr.begin()+l+1, arr.begin()+h);
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
     return BS_Method(arr,k,x);
    }
};

// // BS METHOD:
// class Solution {
// public:
//     vector<int> twoPointerMethod(vector<int>& arr, int k, int x) {
//         int l = 0;
//         int h = arr.size()-1;
//         while(h-l >= k){
//             if(x-arr[l] > arr[h]-x){
//                 l++;
//             }
//             else{
//                 h--;
//             }
//         }

//         // vector<int> ans;
//         // for(int i = l; i<=h; i++){
//         //     ans.push_back(arr[i]);
//         // }
//         // return ans;

//         return vector<int>(arr.begin()+l, arr.begin()+h+1);
//     }

//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//      return twoPointerMethod(arr,k,x);
//     }
// };

int main(){
    // vector<int> arr{1,2,3,4,5};
    // int k = 4;
    // int x = 3;
    vector<int> arr{0,1,2,2,2,3,6,8,8,9};
    int k = 5;
    int x = 9;
    Solution sol;
    // vector<int> y = sol.findClosestElements(arr,k,x);
    vector<int> y = sol.BS_Method(arr,k,x);
    for (int i = 0; i < y.size(); i++)
    {
        cout<<y[i]<<" ";
    }
    
    return 0;
}