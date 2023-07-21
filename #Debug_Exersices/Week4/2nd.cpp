// Debug the code. This code is implementation for binary search for calculating ceil index. The ceil index is the index of the smallest element in the array that is greater than or equal to a given target value.

#include<iostream>
using namespace std;
    int ceilIndex(int arr[], int n, int target) {
        int left = 0;
        int right = n - 1;
        int ceil = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target){
                return mid;
            }
            else if (arr[mid] < target){
                left = mid + 1;
            }
            else{
                ceil = mid;
                right = mid-1;
            }
        }

        return ceil;
    }
int main(){
    int arr[] = {0,1,2,3,4,5,6,8,12,62,98};
    int n = sizeof(arr)/sizeof(int);
    int x = ceilIndex(arr, n, 55);
    cout<<x<<endl;
    return 0;
}


// GIVEN:
// int ceilIndex(int arr[], int n, int target) {
//     int left = 0;
//     int right = n - 1;
//     int ceil = -1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == target)
//             return mid;
//         else if (arr[mid] < target)
//             left = mid + 1;
//         else 
//             ceil = mid;
//             right = mid - 1;
//     }

//     return ceil;
// }

// SOLUTION:
// int ceilIndex(int arr[], int n, int target) {
//     int left = 0;
//     int right = n - 1;
//     int ceil = -1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == target)
//             return mid;
//         else if (arr[mid] < target)
//             left = mid + 1;
//         else {
//             ceil = mid;
//             right = mid - 1;
//         }
//     }

//     return ceil;
// }