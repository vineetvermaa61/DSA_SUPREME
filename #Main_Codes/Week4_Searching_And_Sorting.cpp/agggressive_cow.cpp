//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool isPossibleSolution(int n, int k, vector<int> &stalls,int mid){
        // can we place k cows with at least mid distance b/w cows
        int count = 1;
        int position = stalls[0];
        for(int i = 1; i < stalls.size(); i++){
            if(stalls[i] - position >= mid){
                count++;
                position = stalls[i]; // one more cow can be placed
            }
            if(count == k){
                return true;
            }
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        int start = 0;
        int end = stalls[stalls.size()-1]-stalls[0];
        int ans = -1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(isPossibleSolution(n,k,stalls,mid)){
                ans = mid;
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends

// bool isPossibleSolution(vector<int> &stalls, int k,int mid){
//     int count = 1;
//     int position = stalls[0];
//     for(int i = 1; i<stalls.size(); i++){
//         if(stalls[i] - position >= mid){
//             count++;
//             position = stalls[i];
//         }
//         if(count == k){
//             return true;
//         }
//     }
//     return false;
// }

// int aggressiveCows(vector<int> &stalls, int k)
// {
//     sort(stalls.begin(), stalls.end());
//     int start = 0;
//     int end = stalls[stalls.size()-1] - stalls[0];
//     int ans = -1;
//     while(start <= end){
//         int mid = start + (end - start)/2;
//         if(isPossibleSolution(stalls,k,mid)){
//             ans = mid;
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//     }
//     return ans;
// }