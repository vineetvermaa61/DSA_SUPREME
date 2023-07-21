// Left Rotate an Array by One
// #include<iostream>
// using namespace std;
// void rotate(int arr[], int n){
//     int brr[10] = {0};
//     brr[n-1] = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         brr[i-1] = arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout<<brr[i]<<" ";
//     }
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8};

//     // arr[0] -> brr[4]
//     // arr[1] -> brr[0]
//     // arr[2] -> brr[1]
//     // arr[3] -> brr[2]
//     // arr[4] -> brr[3]

//     int n = 8;
//     rotate(arr,n);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> rotateArray(vector<int>& arr, int n) {
//     // Write your code here.
//     cout<<"1"<<endl;
//     vector<int> brr;
//     cout<<"2"<<endl;

//     // brr[n-1] = arr[0];
//     cout<<"3"<<endl;
//     for (int i = 1; i < n; i++)
//     {
//         // brr[i-1] = arr[i];
//         brr.push_back(arr[i]);
//     }
//     brr.push_back(arr[0]);
//     cout<<"4"<<endl;

//     // for (int i = 0; i < n; i++)
//     // {
//     //     arr.push_back(brr[i]);
//     // }
//     cout<<"5"<<endl;
    
//     return brr;
// }
// int main(){
//     vector<int> arr {1,2,3,4,5};
//     // int arr[] = {1,2,3,4,5};
//     int n = arr.size();
//     cout<<"0"<<endl;
//     vector<int> A;
//     A= rotateArray(arr,n);
//     cout<<"6"<<endl;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<A[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"7"<<endl;
//     return 0;
// }

// SUBMITTED:
// vector<int> rotateArray(vector<int>& arr, int n) {
//     vector<int> brr;
//     for (int i = 1; i < n; i++){
//         brr.push_back(arr[i]);
//     }
//     brr.push_back(arr[0]);
//     return brr;
// }