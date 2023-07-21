// This code tries to move all negative numbers to one side but have some errors, can you spot those errors. Hint: Incomplete conditions applied.
// *****************IMPORTANT******************
#include<iostream>
using namespace std;
 void print(int arr[], int n){
            for (int i = 0; i < n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
void moveNegative(int arr[], int n){
    int i=0, j=n-1;
    while(i<j){
        while(arr[i]<0 && i<j){ // swap when a positive element is encountered
            i++;
        }
        while(arr[j]>0 && i<j){ // swap when a negative element is encountered
            j--;
        }
        swap(arr[i], arr[j]); // swap the elements

       print(arr,n);
       cout<<"i: "<<i<<"  j: "<<j<<endl;
        // i++;
        // j--;
    }
}
int main(){
    int arr[] = {2, -3, -1, 5, -4};
    int n = sizeof(arr)/sizeof(arr[0]);
    moveNegative(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// GIVEN:
// #include<iostream>
// using namespace std;
// void moveNegative(int arr[], int n){
//     int i=0, j=n-1;
//     while(i<j){
//         while(arr[i]<0){ // swap when a positive element is encountered
//             i++;
//         }
//         while(arr[j]>0){ // swap when a negative element is encountered
//             j--;
//         }
//         swap(arr[i], arr[j]); // swap the elements
//     }
// }
// int main(){
//     int n = 5;
//     int arr[n] = {2, -3, -1, 5, -4};
//     moveNegative(arr, n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// SOLUTION:
// #include<iostream>
// using namespace std;
// void moveNegative(int arr[], int n){
//     int i=0, j=n-1;
//     while(i<j){
//         while(arr[i]<0 && i<j){ // move i until a positive element is encountered
//             i++;
//         }
//         while(arr[j]>0 && i<j){ // move j until a negative element is encountered
//             j--;
//         }
//         if(i<j){ // swap only when i is less than j
//             swap(arr[i], arr[j]); // swap the elements
//         }
//     }
// }
// int main(){
//     int n = 5;
//     int arr[n] = {2, -3, -1, 5, -4};
//     moveNegative(arr, n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// /*
// In the corrected code, we added an additional condition to check if i is less than j before swapping elements. Also, we added an additional condition to check if i and j are still within the bounds of the array.

// */