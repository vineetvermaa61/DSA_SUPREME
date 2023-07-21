#include<iostream>
#include<algorithm>
using namespace std;
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {2,3,1,6,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
// Uses IntroSort => Combination of Quick Sort & Heap Sort
    sort(arr , arr + n);

    print(arr,n);
    
    return 0;
}