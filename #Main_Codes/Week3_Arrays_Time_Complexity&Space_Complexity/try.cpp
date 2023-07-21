#include<iostream>
#include<cstring>
using namespace std;

int main(){

    // int arr[0] = {0};
    // cout<<arr[0]<<endl;
    int arr[6];
    memset(arr,-1,sizeof(arr));
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}