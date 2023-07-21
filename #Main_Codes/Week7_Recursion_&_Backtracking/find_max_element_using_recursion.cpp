// Finding maximum/minimum element
#include<iostream>
using namespace std;
void findMax(int arr[], int n, int i, int& maxi){
    // base case - rookna kab hai
    // array agar khatm hogaya, poora array traverse ho gaya
    // to wapas a jao
    if(i >= n){
        return;
    }

    // 1 case solve kar do
    // current element ko check karo for max
    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }
    // baaki recursion sambhal lega
    findMax(arr,n,i+1,maxi);
}

// FINDING MINIMUN ELEMENT
void findMin(int arr[], int n, int i, int& mini){
    // base case - rookna kab hai
    if(i >= n){
        return;
    }

    // 1 case solve kar do
    // current element ko check karo for min
    if (arr[i] < mini)
    {
        mini = arr[i];
    }
    // baaki recursion sambhal lega
    findMin(arr,n,i+1,mini);
}
int main(){
    int arr[] = {2,10,22,30,66,44,14};
    int n = 7;
    int i = 0;

    int maxi = INT_MIN;
    findMax(arr,n,i,maxi);
    cout<<"Maximum number is: "<<maxi<<endl;

    int mini = INT_MAX;
    findMin(arr,n,i,mini);
    cout<<"Minimum number is: "<<mini<<endl;

    return 0;
}