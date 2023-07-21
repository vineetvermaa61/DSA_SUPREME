// Rotate matrix by 90 degree
// Input:          Output:
// 1 2 3           7 4 1
// 4 5 6           8 5 2
// 7 8 9           9 6 3
// *****************IMPORTANT******************
#include <utility>
#include<iostream>
#include<vector>

using namespace std;
// STEP1: Take Transpose
void transpose(vector<vector<int> >& arr){
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            // int temp = arr[i][j];
            // arr[i][j] = arr[j][i];
            // arr[j][i] = temp;
            // OR
            swap(arr[i][j],arr[j][i]);
        }
    }
}
// STEP2: Take reverse of elements of transposed matrix
// vertically reversed
// void reverse(vector<vector<int> >& arr){
//     for (int i = 0; i < arr.size()/2; i++)
//     {
//         for (int j = 0; j < arr.size(); j++)
//         {
//             swap(arr[i][j], arr[arr.size()-1-i][j]);
//         } 
//     }
// }
// OR
// horizontally reversed
void reverse(vector<vector<int> >& arr){
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size()/2; j++)
        {
            swap(arr[i][j], arr[i][arr.size()-j-1]);
        } 
    }
}

// STEP3:
void printMatrix(vector<vector<int> >& arr){
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int> > arr = {{1,2,3},
                                {4,5,6},
                                {7,8,9}};

    
    cout<<"Before: "<<endl;
    printMatrix(arr);
    cout<<"After Transpose: "<<endl;
    transpose(arr);
    printMatrix(arr);
    cout<<"After Reverse: "<<endl;
    reverse(arr);
    printMatrix(arr);
    


    return 0;
}