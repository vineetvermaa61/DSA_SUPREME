// #include<iostream>
// #include<vector>
// #include<set>
// // #include <bits/stdc++.h> 
// ********USING SET*******

// using namespace std;
// vector<int> findCommonElements(vector<int> &a, vector<int> &b, vector<int> &c)
// {
//     vector<int> ans;
//     set<int> st;
//     int i,j,k;
//     i=j=k=0;
//     while(i<=a.size() && j<b.size() && k<c.size()){
//         if(a[i]==b[j] && b[j]==c[k] && a[i]==c[k] ){
//             st.insert(a[i]);
//             i++,j++,k++;
//         }
//         else if(a[i]<b[j]){
//             i++;
//         }
//         else if(b[j]<c[k]){
//             j++;
//         }
//         else{
//             k++;
//         }
//     }
//     for(auto i : st){
//         ans.push_back(i);
//     }
//     return ans;
// }
// int main(){
//     vector<int> a{1,5,10,20,40,80,80};
//     vector<int> b{6,7,20,80,100};
//     vector<int> c{3,4,15,20,30,70,80,120};
//     // vector<int> arr{findCommonElements(a,b,c)};
//     // OR
//     vector<int> arr = findCommonElements(a,b,c);
//     // cout<<arr.size();
//     // if (arr.size () == 0) {
//     //     cout << -1;
//     // }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }

// // *********USING ANOTHER STORE VARIABLE********
// #include<iostream>
// #include<vector>
// #include<set>
// #include<limits>
// // #include <bits/stdc++.h> 

// using namespace std;
// vector<int> findCommonElements(vector<int> &a, vector<int> &b, vector<int> &c)
// {
//     vector<int> ans;
//     // set<int> st;
//     int i,j,k;
//     i=j=k=0;
//     int store = INT_MIN;
//     while(i<=a.size() && j<b.size() && k<c.size()){
//         if(a[i]==b[j] && b[j]==c[k] && a[i]==c[k] ){
//             if(a[i] != store){
//             ans.push_back(a[i]);
//             store = a[i];
//             }
//             i++,j++,k++;
//         }
//         else if(a[i]<b[j]){
//             i++;
//         }
//         else if(b[j]<c[k]){
//             j++;
//         }
//         else{
//             k++;
//         }
//     }
//     // for(auto i : st){
//     //     ans.push_back(i);
//     // }
//     return ans;
// }
// int main(){
//     // vector<int> a{1,5,10,20,40,80,80};
//     // vector<int> b{6,7,20,80,100};
//     // vector<int> c{3,4,15,20,30,70,80,120};

//     vector<int> a{3,3,3};
//     vector<int> b{3,3,3};
//     vector<int> c{3,3,3};
//     // vector<int> arr{findCommonElements(a,b,c)};
//     // OR
//     vector<int> arr = findCommonElements(a,b,c);
//     // cout<<arr.size();
//     // if (arr.size () == 0) {
//     //     cout << -1;
//     // }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }


// **********BY REMOVING DUPLICATES********
#include<iostream>
#include<vector>
#include<set>
#include<limits>
// #include <bits/stdc++.h> 

using namespace std;
vector<int> findCommonElements(vector<int> &a, vector<int> &b, vector<int> &c)
{
    vector<int> ans;
    vector<int> ans2;
    // vector<int> ans2(0,ans.size());
    // vector<int> ans3(0,ans.size());
    int i,j,k;
    i=j=k=0;
    while(i<=a.size() && j<b.size() && k<c.size()){
        if(a[i]==b[j] && b[j]==c[k] && a[i]==c[k] ){
            ans.push_back(a[i]);
            i++,j++,k++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<c[k]){
            j++;
        }
        else{
            k++;
        }
    }

        // int count[100000] = {0};
        // vector<int> count(1000000,0);
        vector<int> count(100000,0);
        for (int i = 0; i < ans.size(); i++) {
            count[ans[i]]++;
        }
        for (int i = 0; i < 100000; i++) {
            if(count[i]>0){
                ans2.push_back(i);
            }
        }

    return ans2;
}
int main(){
    // vector<int> a{1,5,10,20,40,80,80};
    // vector<int> b{6,7,20,80,100};
    // vector<int> c{3,4,15,20,30,70,80,120};

    vector<int> a{3,3,3};
    vector<int> b{3,3,3};
    vector<int> c{3,3,3};
    // vector<int> arr{findCommonElements(a,b,c)};
    // OR
    vector<int> arr = findCommonElements(a,b,c);
    // cout<<arr.size();
    // if (arr.size () == 0) {
    //     cout << -1;
    // }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}



// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// class Solution
// {
//     public:    
//        vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
//         {
//     vector<int> ans;
//     set<int> st;
//     int i,j,k;
//     i=j=k=0;
//     while(i<=n1 && j<n2 && k<n3){
//         if(A[i]==B[j] && B[j]==C[k] && A[i]==C[k] ){
//             st.insert(A[i]);
//             i++,j++,k++;
//         }
//         else if(A[i]<B[j]){
//             i++;
//         }
//         else if(B[j]<C[k]){
//             j++;
//         }
//         else{
//             k++;
//         }
//     }
//     for(auto i : st){
//         ans.push_back(i);
//     }
//     return ans;}
// };

// //{ Driver Code Starts.

// int main ()
// {
//     int t; cin >> t;
//     while (t--)
//     {
//         int n1, n2, n3; 
//         cin >> n1 >> n2 >> n3;
//         int A[n1];
//         int B[n2];
//         int C[n3];
        
//         for (int i = 0; i < n1; i++) cin >> A[i];
//         for (int i = 0; i < n2; i++) cin >> B[i];
//         for (int i = 0; i < n3; i++) cin >> C[i];
        
//         Solution ob;
        
//         vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
//         if (res.size () == 0) 
//             cout << -1;
//         for (int i = 0; i < res.size (); i++) 
//             cout << res[i] << " "; 
//         cout << endl;
//     }
// }
// // } Driver Code Ends