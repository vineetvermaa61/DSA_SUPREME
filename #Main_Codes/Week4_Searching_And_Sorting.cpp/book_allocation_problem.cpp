//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:

    bool isPossibleSolution(int A[], int N, int M, int sol){
        int pageSum = 0;
        int c = 1;
        for (int i = 0; i < N; i++)
        {
            if(A[i] > sol){
                return false;
            }
            if(pageSum + A[i] > sol){
                c++;
                pageSum = A[i];
                if(c>M){
                    return false;
                }
            }
            else{
                pageSum += A[i];
            }
        }
        return true;
        
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M>N){
            return -1;
        }
        int start = 0;
        int end = accumulate(A, A+N, 0);
        int ans = -1;
        while (start<=end)
        {
            int mid = (start+end)>>1;
            if(isPossibleSolution(A, N , M, mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
        

    }
};

//{ Driver Code Starts.

int main() {
    // int t;
    // cin>>t;
    // while(t--){
        int n;
        cin>>n;
        int m;
        cin>>m;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    // }
    return 0;
}


// bool isPossibleSolution(vector<int>& arr, int n, int m,int mid){
//     int pageSum = 0;
//     int count = 1;
//     for(int i = 0;i<n;i++){
//         if(arr[i]>mid){
//             return false;
//         }
//         if(pageSum + arr[i] > mid){
//             pageSum = arr[i];
//             count++;
//             if(count>m){
//                 return false;
//             }
//         }
//         else{
//             pageSum += arr[i];
//         }
//     }
//     return true;
// }


// int findPages(vector<int>& arr, int n, int m) {
//     int start = 0;
//     int sum = 0;
//     for(int i =0;i<n;i++){
//         sum += arr[i];
//     }
//     int end = sum;
//     // int end = accumulate(arr,arr+n,0);
//     int ans = -1;
//     while(start<=end){
//         int mid = start + (end - start)/2;
//         if(m>n){
//             return -1;
//         }
//         if(isPossibleSolution(arr,n,m,mid)){
//             ans = mid;
//             end = mid - 1;
//         }
//         else{
//             start = mid + 1;
//         }

//     }
//     return ans;
// }