// Debug the code. This code tries to implement Bubble Sort.
#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {4,7,6,2,3,5};
    int n = sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubbleSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

// GIVEN:
//  void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 2; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }

// SOLUTION:
// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) { // fix: i < n-1 instead of i <= n
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }