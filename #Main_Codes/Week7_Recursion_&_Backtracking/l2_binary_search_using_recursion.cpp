// Binary Search using recursion
#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr,int s,int e,int key){
    // base case - rookna kab hai
    // case1 - key not found
    if(s>e){  // s>e => invalid array
        return -1;
    }

    // case2 - key found
    // 1 case solve kar do 
    int mid = s + (e-s)/2;
    if (arr[mid] == key)
    {
        return mid;
    }

    // baaki recursion sambhal lega
    if (arr[mid]<key) // arr[mid] < key => right mein search
    {
        return binarySearch(arr,mid+1,e,key);
    }
    else{             // arr[mid] > key => left mein search
        return binarySearch(arr,s,mid-1,key);
    }

    // OR
    // We can use ternary operator to return 
    // return ((arr[mid]<key) ? binarySearch(arr,mid+1,e,key) : binarySearch(arr,s,mid-1,key));
}


int main(){
    vector<int> v{15,25,35,45,65,95};
    int n = v.size();
    int s = 0;
    int e = n-1;
    int target = 95;
    int ans = binarySearch(v,s,e,target);
    cout<<"Answer is: "<<ans<<endl;
    return 0;
}