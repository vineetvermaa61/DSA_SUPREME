// Check if an array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
bool checkSort(vector<int>& arr,int& n, int i){
    // base case - rookna kab hai
    if(i == n-1){
        return true;
    }

    // 1 case solve karna hai
    if(arr[i+1] < arr[i]){
        return false;
    }
    // baaki recursion sambhal lega
    return checkSort(arr,n,i+1);
}
int main(){
    vector<int> v{2,5,9,6,78};
    int n = v.size();
    int i = 0;
    if (checkSort(v,n,i))
    {
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    
    return 0;
}