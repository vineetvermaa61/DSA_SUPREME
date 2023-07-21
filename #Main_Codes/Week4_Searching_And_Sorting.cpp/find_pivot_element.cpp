#include<iostream>
#include<vector>
using namespace std;
int findPivotIndex(vector<int> arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;
    while(s<e){
        // alag se handle kiya
        if(arr[mid] > arr[mid+1] && mid + 1 < arr.size()){
            return mid;
        }

        // alag se handle kiya
        if(arr[mid-1] > arr[mid] && mid - 1  >=0){
            return mid-1;
        }

// if(arr[s] >= arr[mid]) => BE CAREFULL
        if(arr[s] >= arr[mid]){ 
            // left search
            e = mid - 1;
        }else{
            // right  search
            s = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int main(){
    vector<int> arr{3,4,5,6,7,1,2};
    // vector<int> arr{2};
    int index = findPivotIndex(arr);
    cout<<"Index of Pivot element: "<<index<<endl;
    cout<<"Pivot element is: "<<arr[index]<<endl;
    return 0;
}