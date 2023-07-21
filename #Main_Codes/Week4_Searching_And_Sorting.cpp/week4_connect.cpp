// // peak in mountain
// #include<iostream>
// using namespace std;
// int binarySearch(int arr[], int n){
//     int s = 0;
//     int e = n-1;
//     int mid = s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]<arr[mid+1]){
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s+(e-s)/2;
//     }
//     return s;
// }
// int main(){
//     // int arr[] = {0,10,5,2};
//     // int n =4;
//     int arr[] = {0,10,20,30,42,96,102,5,2,0,-1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int peak = binarySearch(arr,n);
//     cout<<"Peak Element "<<arr[peak]<<endl;
//     return 0;
// }

// // pivot -> smallest element
// #include<iostream>
// using namespace std;
// int binarySearch(int arr[], int n){
//     int s = 0;
//     int e = n-1;
//     int mid = s+(e-s)/2;
//     while(s<e){
//         // alag se handled  /..
//         // smallest element ke liye mid ko yahan smallest element mankar solve karo 
//         if(arr[mid]>arr[mid+1]){
//             return mid+1;
//         }
//         if(arr[mid]<arr[mid-1]){
//             return mid;
//         } // ../

//         if(arr[s] < arr[mid]){
//             s = mid+1;
//         }
//         else{
//             e = mid - 1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return -1;
// }
// int main(){
//     // int arr[] = {0,10,5,2};
//     // int n =4;
//     int arr[] = {9,10,15,19,0,1,2,4,6,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int pivot = binarySearch(arr,n);
//     cout<<"Pivot Element "<<arr[pivot]<<endl;
//     return 0;
// }

// // pivot -> largest element
// #include<iostream>
// using namespace std;
// int binarySearch(int arr[], int n){
//     int s = 0;
//     int e = n-1;
//     int mid = s+(e-s)/2;
//     while(s<=e){
//         if(s==e){
//             // single element
//             return s;
//         }
//         // alag se handled  /..
//         // largest element ke liye mid ko yahan largest element mankar solve karo 
//         if(arr[mid]>arr[mid+1] && mid<= e){  // mid<=e
//             return mid;
//         }
//         if(arr[mid]<arr[mid-1] && mid-1 >=0){ // mid-1 >=0
//             return mid-1;
//         } // ../

//         if(arr[s] > arr[mid]){  // '=' is for handling duplicates
//             e = mid - 1;
//         }
//         else{
//             s = mid+1;
//         }
//         mid = s+(e-s)/2;
//     }
//     // return mid; // when s<e
//     return -1;
// }
// int main(){
//     // int arr[] = {0,10,5,2};
//     // int n =4;
//     // int arr[] = {9,10,2,4,6,8};
//     // int arr[] = {10};
//     // int arr[] = {2,4,6,8,9,10};
//     // int arr[] = {2,4,4,4,6,6,8,9,10,10};
//     int arr[] = {1,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int pivot = binarySearch(arr,n);
//     cout<<"Pivot Element "<<arr[pivot]<<endl;
//     cout<<"Pivot Index "<<pivot<<endl;
//     return 0;
// }


// // pivot -> largest element
// #include<iostream>
// #include<vector>
// using namespace std;
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
//              // mid bada hai mid+1 se isliye mid par condition
//             //  ye condition pehle check honi chahiye nahin to doosri condition mein fault/error/out of bound hone par time taking hoga
//             if(mid <= e && nums[mid] > nums[mid+1] ){ // mid <=e pehle rehna chahiye 
//                 return mid; // mid returned
//             }
//              // mid-1 bada hai mid se isliye mid-1 par condition
//             if(mid-1 >= 0 && nums[mid] < nums[mid-1] ){  // mid >=0 pehle rehna chahiye
//                 return mid-1; // mid-1 returned
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
// int main(){
//     // int arr[] = {0,10,5,2};
//     // int n =4;
//     // int arr[] = {9,10,2,4,6,8};
//     // int arr[] = {10};
//     // int arr[] = {2,4,6,8,9,10};
//     // int arr[] = {2,4,4,4,6,6,8,9,10,10};
//     // int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int> arr {1,3};
//     Solution sol;
//     int pivot = sol.search(arr,0);
//     // cout<<"Pivot Element "<<arr[pivot]<<endl;
//     cout<<"Pivot Index "<<pivot<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int squareRoot(int n){
//     int s = 0;
//     int e = n;
//     int target = n;
//     int mid = s+(e-s)/2;
//     int ans = -1;
//     while(s<=e){
//         if(mid*mid == target){
//             return mid;
//         }else if(mid*mid>target){
//             e = mid - 1;
//         }else{
//             ans = mid;
//             s = mid + 1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return ans;
// }
// int main(){
//     int n; cout<<"Enter number: "; cin>>n;
//     int sqrt = squareRoot(n);
//     cout<<"Square Root "<<sqrt<<endl;

//     int pre; cout<<"Precision: "; cin>>pre;
//     double step = 0.1;
//     double finalRoot = sqrt;
//     for (double i = 0; i < pre; i++)
//     {
//         for (double j = finalRoot; j*j < n; j = j + step)
//         {
//             finalRoot = j;
//         }
//         step = step/10;
//     }

//     cout<<"Final square root: "<<finalRoot<<endl;
    
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
vector<int> binarySearch(vector<vector<int> > arr,int target){
    vector<int> ans;
    int row = arr.size();
    int col = arr[0].size();
    // cout<<"Row"<<row<<" col "<<col<<endl
    int s = 0;
    int e = row*col-1;
    int mid = s + (e-s)/2;
    while(s<=e){
    int rowIndex = mid/col;
    int colIndex = mid%col;
        if(arr[rowIndex][colIndex] == target){
            ans.push_back(rowIndex);
            ans.push_back(colIndex);
            return ans;
        }

        if(arr[rowIndex][colIndex] > target){
            e = mid - 1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    vector<vector<int> > arr{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int target = 12;
    
    // printing a returned vector
    vector<int> even_vect = binarySearch(arr,target);
    for (int i = 0; i < even_vect.size(); i++)
    {
        cout<<"Printing Vector: "<<even_vect[i]<<endl;
    }


    return 0;
}