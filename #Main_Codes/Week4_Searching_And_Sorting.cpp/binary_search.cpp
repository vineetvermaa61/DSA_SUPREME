#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while (start <= end)
    {
        // int index = 
        if(arr[mid] == target){
            return mid;
        }
        
        if(target > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        // ***************MID KO UPDATE KARNA MAT BHOOLNA*******************
        mid = start+(end-start)/2;
    }
    return -1;
}
int main(){
    int arr[] = {2,4,6,8,12,16};
    int size = 7;
    int target = 16;

    int indexOfTarget = binarySearch(arr,size,target);

    if(indexOfTarget == -1){
        cout<<"Index not found"<<endl;
    }else{
        cout<<"Index = "<<indexOfTarget<<endl;

    }
    return 0;
}