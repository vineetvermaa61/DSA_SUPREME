#include<iostream>
#include<cstring> // header file for using memset
using namespace std;

int main(){
    int arr[10];
    // cout<< sizeof(arr)<<endl;
    memset(arr, -1, sizeof(arr));  // we can only and only provide values => 0 or 1
    // memset(arr, 0, sizeof(arr));  

    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // OR
    int n;
    cout<<"Enter n: "; cin>>n;
    int brr[n];
    memset(brr, -1, sizeof(brr));  // we can only and only provide values => 0 or 1
    // memset(arr, 0, sizeof(arr));  

    for (int i = 0; i < sizeof(brr)/sizeof(brr[0]); i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;

    return 0;
}