// Debug the code. This code tries to implement Selection Sort.
#include<iostream>
using namespace std;
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
    int minIndex = i;
        
        for ( int j = i + 1; j < n; j++) {
            // NOTE: POORE ARRAY KE SABHI ELEMENTS MEIN SE MINIMUM ELEMENT DHOONDHNE KE BAAD SWAP KIYA
            if (arr[j] < arr[minIndex]){
                minIndex = j;
                }
        }
                // swap(arr[i],arr[minIndex]);
                int temp = arr[minIndex];
                arr[minIndex] = arr[i];
                arr[i] = temp;
    }
}
int main(){
    int arr[] = {4,7,6,2,3,5};
    int n = sizeof(arr)/sizeof(int);
    // cout<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}


// GIVEN:
// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex])
//                 minIndex = j;
//         }
//         int temp = arr[minIndex];
//         arr[minIndex] = arr[j];
//         arr[j] = temp;
//     }
// }

// SOLUTION:
// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex])
//                 minIndex = j;
//         }
//         int temp = arr[minIndex];  // fix: swap with min element, not current element
//         arr[minIndex] = arr[i];
//         arr[i] = temp;
//     }
// }