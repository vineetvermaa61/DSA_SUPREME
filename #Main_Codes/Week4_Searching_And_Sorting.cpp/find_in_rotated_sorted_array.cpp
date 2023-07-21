#include<iostream>
#include<vector>
using namespace std;

// *******************************MOST IMPORTANT REVISE IT AGAIN AND AGAIN**********************************************
    class Solution {
public:

        int binarySearch(vector<int> arr, int target, int start,int end){
        int mid = start+(end-start)/2;
        while (start <= end)
        {
            int element = arr[mid];
            if(element == target){
                return mid;
            }
            
            if(target < element){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            // ***************MID KO UPDATE KARNA MAT BHOOLNA*******************
            mid = start+(end-start)/2;
        }
        return -1;
    }

        int findPivotIndex(vector<int> arr){
        int s = 0;
        int e = arr.size()-1;
        int mid = s + (e-s)/2;

        while(s<e){
            // alag se handle kiya
            if(mid + 1< arr.size() && arr[mid] > arr[mid+1])
            return mid;
            // alag se handle kiya
            if( mid - 1  >= 0 && arr[mid-1] > arr[mid] )
            return mid-1;
            
// if(arr[s] >= arr[mid]) => BE CAREFULL
            if(arr[s] >= arr[mid])
                // left search
            e = mid - 1;
            else
                // right  search
            s = mid ;
            mid = s + (e-s)/2;
        }
        return s;
        
    }

    int search(vector<int>& nums, int target) {
        int pivot = findPivotIndex(nums);

        if(target >= nums[0] && target <= nums[pivot]){
            int ans = binarySearch(nums,target,0,pivot);
            return ans;
        }
// pivot < nums.size() => MUST CONDITION
        if(pivot+1 < nums.size() && target >= nums[pivot+1] && target <= nums[nums.size()-1]){
            int ans = binarySearch(nums,target,pivot+1,nums.size()-1);
            return ans;
        }
        return -1;
    }
};
int main(){
    // vector<int> ans{4,5,6,7,0,1,2};
    vector<int> ans{1,3};
    Solution sol;
    sol.search(ans,0);
    return 0;
}


// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:
//     int binarySearch(vector<int> arr, int target, int start, int end) {

//     int mid = start + (end - start ) / 2;

//     while(start <= end) {
//         int element = arr[mid];

//         if(element == target) {//element found, then return index
//         return mid;
//         }
        
//         if(target < element) {
//         //search in left
//         end = mid - 1;
//         }
//         else {
//         //search in right
//         start = mid + 1;
//         }

//         mid = start + (end - start ) / 2;

//     }

//   //element not found
//   return -1;

// }
//     int findPivot(vector<int> arr) {
//     int s = 0;
//     int e = arr.size() - 1;
//     int mid = s + (e-s)/2;

//     while(s < e) {
//         if(mid+1 < arr.size() && arr[mid] > arr[mid+1])
//         return mid;
//         if(mid-1 >= 0 && arr[mid-1] > arr[mid])
//         return mid-1;

//         if(arr[s] >= arr[mid])
//         e = mid - 1;
//         else
//         s = mid ;
//         mid = s + (e-s)/2;
//     }
//     return s; 
//     }

//     int search(vector<int>& nums, int target) {
//         int pivotIndex = findPivot(nums);

//         if(target >= nums[0] && target <= nums[pivotIndex]){
//             //search in array A
//             int ans = binarySearch(nums, target, 0, pivotIndex);
//             return ans;
//         }

//         if(pivotIndex+1 < nums.size() && 
//         target >= nums[pivotIndex+1] && target <= nums[nums.size()-1]){
//             //search in array B
//             int ans = binarySearch(nums, target, pivotIndex+1, nums.size()-1);
//             return ans;
//         }
//         return -1;
        
//     }
// };
// int main(){
//     vector<int> ans{4,5,6,7,0,1,2};
//     // vector<int> ans{1,3};
//     Solution sol;
//     sol.search(ans,0);
//     return 0;
// }

// class Solution {
// public:
//     int findPivot(vector<int>& nums){
//         int s = 0;
//         int e = nums.size()-1;
//         int mid = s + (e-s)/2;
//         // 0 10 5 2
//         while(s<=e){
//             if(s==e){
//                 // single element
//                 return s;
//             }
//             if( mid <= e && nums[mid] > nums[mid+1]  ){ // mid bada hai mid+1 se
//                 return mid;
//             }
//             if(mid-1 >= 0 && nums[mid] < nums[mid-1]   ){
//                 return mid-1;
//             }

//             if(nums[s] > nums[mid])
//                 e = mid-1;
//             else
//                 s = mid+1;
//             mid = s + (e-s)/2;
//         }
//         return -1;
//     }
//     int binarySearch(vector<int>& nums, int s, int e, int target){
//         int mid = s + (e-s)/2;
//         while(s<=e){
//             if(nums[mid] == target)
//                 return mid;
//             if(nums[mid] > target)
//                 e = mid-1;
//             else
//                 s = mid+1;
//             mid = s + (e-s)/2;
//         }
//         return -1;
//     }

//     int search(vector<int>& nums, int target) {
//         int pivotIndex = findPivot(nums);
//         int ans = 0;
//         if(target >= nums[0] && target <= nums[pivotIndex]){
//             ans = binarySearch(nums,0,pivotIndex,target);
//         }
//         else
//         {
//             ans = binarySearch(nums,pivotIndex+1,nums.size()-1,target);
//         }
//         return ans;
//     }
// };