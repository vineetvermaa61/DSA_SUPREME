#include <iostream>
#include <vector>
#include <deque>
using namespace std;
vector<int> solve(int arr[], int n, int k)
{
    vector<int> ans;
    deque<int> q;
    // process first window of size K
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            q.push_back(i);
        }
    }
    // remaining window ko process
    for (int i = k; i < n; i++)
    {
        // answer dedo purani window ka
        if (q.empty())
        {
            // cout << "0 ";
            ans.push_back(0);
        }
        else
        {
            // cout << arr[q.front()] << " ";
            ans.push_back(arr[q.front()]);
        }
        // out of window elements ko remove kar do
        while (!q.empty() && (i - q.front() >= k))
        {
            q.pop_front();
        }
        // check current element for insertion
        if (arr[i] < 0)
        {
            q.push_back(i);
        }
    }
    if (q.empty())
    {
        // cout << "0 ";
        ans.push_back(0);
    }
    else
    {
        // cout << arr[q.front()] << " ";
        ans.push_back(arr[q.front()]);
    }
    return ans;
}
int main()
{
    int arr[] = {12, -1, -7, -8, -15, 30, 16, 28};
    // int arr[] = {-8, 2, 3, -6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    vector<int> ans = solve(arr, n, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// vector<long long> printFirstNegativeInteger(long long int arr[],
//                                              long long int n, long long int k);

// // Driver program to test above functions
// int main() {
//     long long int t, i;
//     cin >> t;
//     while (t--) {
//         long long int n;
//         cin >> n;
//         long long int arr[n];
//         for (i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         long long int k;
//         cin >> k;

//         vector<long long> ans = printFirstNegativeInteger(arr, n, k);
//         for (auto it : ans) cout << it << " ";
//         cout << endl;
//     }
//     return 0;
// }

// // } Driver Code Ends

// vector<long long> printFirstNegativeInteger(long long int A[],
//                                              long long int N, long long int K) {
//                                                  deque<int> q;
//     vector<long long> ans;
//     // process first window of size K
//     for (int i = 0; i < K; i++)
//     {
//         if (A[i] < 0)
//         {
//             q.push_back(i);
//         }
//     }
//     // remaining window ko process
//     for (int i = K; i < N; i++)
//     {
//         // answer dedo purani window ka
//         if (q.empty())
//         {
//             long long int x = 0;
//             ans.push_back(x);
//         }
//         else
//         {
//             // cout << arr[q.front()] << " ";
//             ans.push_back(A[q.front()]);
//         }
//         // out of window elements ko remove kar do
//         while (!q.empty() && (i - q.front() >= K))
//         {
//             q.pop_front();
//         }
//         // check current element for insertion
//         if (A[i] < 0)
//         {
//             q.push_back(i);
//         }
//     }
//     if (q.empty())
//         {
//             long long int x = 0;
//             ans.push_back(x);
//         }
//         else
//         {
//             // cout << arr[q.front()] << " ";
//             ans.push_back(A[q.front()]);
//         }
//         return ans;
//  }

// #include <queue>
// vector<int> firstNegative(vector<int> arr, int n, int k) {
// 	vector<int> ans;
//     queue<int> q;
//     for(int i=0; i< k; i++){
//         if(arr[i] < 0){
//             q.push(i);
//         }
//     }
//     for(int i=k; i<n; i++){
//         if(q.empty()){
//             ans.push_back(0);
//         }
//         else{
//             ans.push_back(arr[q.front()]);
//         }
//         if(!q.empty() && i-q.front() >= k){
//             q.pop();
//         }
//         if(arr[i] < 0){
//             q.push(i);
//         }
//     }
//     if(q.empty()){
//             ans.push_back(0);
//         }
//         else{
//             ans.push_back(arr[q.front()]);
//     }
//     return ans;
// }