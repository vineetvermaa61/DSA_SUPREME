#include<iostream>
#include<vector>
using namespace std;
void rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    vector<int> brr;
    cout<<"1"<<endl;
    brr[n-1] = arr[0];
    cout<<"2"<<endl;
    for (int i = 1; i < n; i++)
    {
        brr[i-1] = arr[i];
    }

    cout<<"3"<<endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] = brr[i];
    }
    cout<<"4"<<endl;
}
int main(){
    vector<int> arr {1,2,3,4,5};
    // int arr[] = {1,2,3,4,5};
    int n = arr.size();

    cout<<"0"<<endl;
    rotateArray(arr,n);
    cout<<"5"<<endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"6"<<endl;

    return 0;
}