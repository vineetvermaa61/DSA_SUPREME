// #include<iostream>
// #include<vector>
// using namespace std;
// int firstOccurence(vector<int> arr,int target){
//     int start = 0;
//     int end = arr.size()-1;
//     int mid = start+(end-start)/2;
//     int ans = -1;
//     while (start <= end)
//     {
//         // int index = 
//         if(arr[mid] == target){
//             // store ans then move left to find first occcurence
//             ans = mid;
//             end = mid - 1;
//         }
//         else if(target > arr[mid]){
//             // right mein search
//             start = mid+1;
//         }
//         else{
//             // left mein search
//             end = mid-1;
//         }
//         mid = start+(end-start)/2;
//     }
//     return ans;
// }
// int main(){
//     // vector<int> arr{1,2,4,4,4,4,4,4,8,9};
//     vector<int> arr{1,2,8,9};
//     int target = 4;
//     int element = firstOccurence(arr, target);
//     cout<<"Fisrt occurence: "<<element<<endl;
//     return 0;
// }

// last occurence
// #include<iostream>
// #include<vector>
// using namespace std;
// int lastOccurence(vector<int> arr,int target){
//     int start = 0;
//     int end = arr.size()-1;
//     int mid = start+(end-start)/2;
//     int ans = -1;
//     while (start <= end)
//     {
//         // int index = 
//         if(arr[mid] == target){
//             // store ans then move left to find first occcurence
//             ans = mid;
//             start = mid + 1;
//         }
//         else if(target > arr[mid]){
//             // right mein search
//             start = mid+1;
//         }
//         else{
//             // left mein search
//             end = mid-1;
//         }
//         mid = start+(end-start)/2;
//     }
//     return ans;
// }

// int main(){
//     vector<int> arr{1,2,4,4,4,4,4,4,8,9};
//     // vector<int> arr{1,2,8,9};
//     int target = 4;
//     int element = lastOccurence(arr, target);
//     cout<<"Last occurence: "<<element<<endl;
//     return 0;
// }


// Total occurence
#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int> arr,int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;
    int ans = -1;
    while (start <= end)
    {
        // int index = 
        if(arr[mid] == target){
            // store ans then move left to find first occcurence
            ans = mid;
            end = mid - 1;
        }
        else if(target > arr[mid]){
            // right mein search
            start = mid+1;
        }
        else{
            // left mein search
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int lastOccurence(vector<int> arr,int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;
    int ans = -1;
    while (start <= end)
    {
        // int index = 
        if(arr[mid] == target){
            // store ans then move left to find first occcurence
            ans = mid;
            start = mid + 1;
        }
        else if(target > arr[mid]){
            // right mein search
            start = mid+1;
        }
        else{
            // left mein search
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int main(){
    vector<int> arr{1,1,2,4,4,4,4,4,4,8,9};
    // vector<int> arr{1,2,8,9};
    int target = 1;
    int element = firstOccurence(arr, target);
    int element2 = lastOccurence(arr, target);
    cout<<"Total occurence: "<<element2 - element + 1<<endl;
    return 0;
}