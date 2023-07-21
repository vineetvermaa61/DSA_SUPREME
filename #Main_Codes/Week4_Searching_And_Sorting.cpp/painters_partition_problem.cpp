//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    bool isPossibleSolution(int arr[], int n, int k,long long sol){
        long long timeSum = 0;
        long long count = 1;
        for(int i =0;i<n;i++){
        if(arr[i]>sol){
            return false;
        }
        if(arr[i] + timeSum > sol){
            timeSum = arr[i];
            count++;
            if(count > k){
                return false;
            }
        }
        else{
            timeSum += arr[i];
        }
        }
        return true;
    }
    long long minTime(int arr[], int n, int k)
    {
        long long start = 0;
        long long sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
        }
        long long end = sum;
        long long ans = -1;
        while(start<=end){
            long long mid = start + (end - start)/2;
            // if(k>n){
            //     return -1;
            // }
            if(isPossibleSolution(arr,n,k,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends


// bool isPossible(vector<int> &boards, int k,int mid){
//     int studentCount = 1;
//     int pageSum = 0;
//     for(int i = 0; i<boards.size(); i++){
//         if(pageSum + boards[i] <= mid){
//             pageSum = pageSum + boards[i];
//         } 
//         else{
//             studentCount++;
//             if(studentCount > k || boards[i] > mid ){
//                 return false;
//             }
//             pageSum = boards[i];
//         }
//     }
//     return true;
// }

// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     int s = 0;
//     int sum = 0;
//     for(int i = 0; i<boards.size(); i++){
//         sum = sum + boards[i];
//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;
//     while(s<=e){
//         if(isPossible(boards,k,mid)){
//             ans = mid;
//             e = mid - 1;
//         }
//         else{
//             s = mid+1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// bool isPossibleSolution(vector<int> &boards, int k,int sol){
//     int timeSum = 0;
//     int c = 1;
//     for(int i = 0;i<boards.size();i++){
//         if(boards[i]>sol){
//             return false;
//         }
//         if(boards[i]+timeSum > sol){
//             timeSum = boards[i];
//             c++;
//             if(c>k){
//                 return false;
//             }
//         }
//         else{
//             timeSum += boards[i];
//         }
//     }
//     return true;
// }

// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     int s = 0;
//     int e = 0;
//     for(int i = 0; i<boards.size();i++){
//         e += boards[i];
//     }
//     int ans = -1;
//     while(s<=e){
//         int mid = s+(e-s)/2;
//         if(k>boards.size()){
//             return -1;
//         }
//         if(isPossibleSolution(boards,k,mid)){
//             ans = mid;
//             e =mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//     }
//     return ans;
    
// }