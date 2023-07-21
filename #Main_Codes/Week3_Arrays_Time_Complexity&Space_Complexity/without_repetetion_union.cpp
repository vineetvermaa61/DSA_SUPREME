// Union of 2 arrays without repetetion of elements
// Using Count Method
// *******************************IMPORTANT************************************
// #include<iostream>
// #include<vector>
// using namespace std;
// // Expected output: 1 2 3 4 6 7 9
// int main(){
//     int arr[] = {1,3,3,4,4,6,7};
//     int sizea = sizeof(arr)/sizeof(arr[0]);
//     int brr[] = {2,3,4,9};
//     int sizeb = sizeof(brr)/sizeof(brr[0]);

//     vector<int> ans;
//     vector<int> ans2(12,0);
//     for (int i = 0; i < sizea; i++){
//         ans.push_back(arr[i]);
//     }
//     for (int i = 0; i < sizeb; i++){
//         ans.push_back(brr[i]);
//     }

//     cout<<"Array after pushing both array's values: "<<endl;
//     for (int i = 0; i < ans.size(); i++){
//         cout<<ans[i]<<" ";
//         // cout<<i<<" ";
//     }
//     cout<<endl;
//     // --------------------------------------
//     for (int i = 0; i < ans2.size(); i++){
//         if (ans[i] > 0)
//         {
//         ans2[ans[i]]++;
//         // cout<<ans2[i]<<" ";
//         }
//     }
//         cout<<endl;
//     for (int i = 0; i < ans2.size(); i++){
//         cout<<ans2[i]<<" ";
//     }
//         cout<<endl;
//     // ---------------------------------------

//     cout<<"Output: ";
//     for (int i = 0; i < ans.size(); i++){
//         if(ans2[i]>0){
//             cout<<i<<" ";
//         }
//     }

//     return 0;
// }

// Using Marking Method
#include<iostream>
#include<vector>
using namespace std;
// Expected output: 1 2 3 4 6 7 9
int main(){
    int arr[] = {1,3,3,4,4,6,7};
    int sizea = sizeof(arr)/sizeof(arr[0]);
    int brr[] = {2,3,4,9};
    int sizeb = sizeof(brr)/sizeof(brr[0]);

    vector<int> ans;
    for (int i = 0; i < sizea; i++){
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < sizeb; i++){
        ans.push_back(brr[i]);
    }

    for (int i = 0; i < sizea + sizeb; i++)
    {
        cout<<ans[i]<<" ";
    }

    cout<<endl;
    for (int i = 0; i < sizea + sizeb; i++)
    {
        for (int j = i+1; j < sizea + sizeb; j++)
        {
            if (ans[i] == ans[j])
            {
                ans.push_back(ans[i]);
                ans[j] = INT_MIN; // for handling duplicates
                ans[i] = INT_MIN; // for handling duplicates
            }
            // else if(ans[j] != INT_MIN || ans[i] != INT_MIN){
            //     // j++;
            //     // i++;
            //     // continue;
            //     // cout<<"";
            // }
            else{
                ans.push_back(ans[i]);
            }
            
        }
        
    }

    vector<int> ans2;
    
    for (int i = 0; i < sizea + sizeb; i++)
    {
        if (ans[i] != INT_MIN)
        {
        ans2.push_back(ans[i]);
        }
        
    }

    for (int i = 0; i < ans2.size(); i++)
    {
        cout<<ans2[i]<<" ";
        
    }

    return 0;
}