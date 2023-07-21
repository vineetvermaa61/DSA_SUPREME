// Transpose Matrix

// Input:    Output:
// 2 4 6     2 1 3
// 1 3 5     4 3 11
// 3 11 13   6 5 13

// 2 -> arr[0][0]   => 2-> arr[0][0]
// 4 -> arr[0][1]   => 2-> arr[1][0]
// 6 -> arr[0][2]   => 2-> arr[2][0]

// arr[i][j] <=> arr[j][i]

#include<iostream>
using namespace std;
    void transpose(int arr[][3],int row, int cols, int transposeArray[][3]){
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                // As we are using the loop row/cols times, so it is swapping every array 2 times so array reaches to its original condition
                // swap(arr[i][j] , arr[j][i]);

                // storing elements transpose wise in transpose array
                transposeArray[j][i] = arr[i][j];
            }
            
        }
        
    }

    void printArray(int arr[][3], int row, int cols){
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
int main(){
    int arr[3][3] = {{2,4,6},
                     {1,3,},
                     {3,11,13}};
    int row = 3;
    int cols = 3;

    cout<<"Printing Array:"<<endl;
    printArray(arr,row,cols);
    cout<<"Starting Transpose:"<<endl;

    // creating a new array to store transpose
    int transposeArray[3][3];

    transpose(arr,row,cols,transposeArray);
    cout<<"Printing Array again:"<<endl;
    printArray(transposeArray,row,cols);
    return 0;
}

// OR

// #include <utility>
// #include<iostream>
// #include<vector>

// using namespace std;
// void transpose(vector<vector<int> >& arr){
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             // int temp = arr[i][j];
//             // arr[i][j] = arr[j][i];
//             // arr[j][i] = temp;
//             // OR
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
// }

// void printMatrix(vector<vector<int> >& arr){
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = 0; j < arr.size(); j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     vector<vector<int> > arr = {{1,2,3},
//                                 {4,5,6},
//                                 {7,8,9}};

    
//     cout<<"Before: "<<endl;
//     printMatrix(arr);
//     transpose(arr);
//     cout<<"After Transpose: "<<endl;
//     printMatrix(arr);
    


//     return 0;
// }