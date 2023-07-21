// Input:  10 20 30 40 50 60 70 80 90
// Output: 90 80 70 60 50 40 30 20 10
// (TWO POINTER CONCEPT)
#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = 9;
    int start = 0;
    int end = size-1;
    while (true)
    {
        if(start > end){
            break;
        }

        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
