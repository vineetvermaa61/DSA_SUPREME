#include<iostream>
using namespace std;

int findMax(int arr[][3], int rows, int cols){
    int maxi = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

int findMin(int arr[][3], int rows, int cols){
    int mini = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j] < mini){
                mini = arr[i][j];
            }
        }
    }
    return mini;
}

int main(){
    // row wise input
    int drr[3][3];
    int rows = 3;
    int cols = 3;
    cout<<"Enter row and cols element: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>drr[i][j];
        }
        
    }

    cout<<"Maximum element: "<<findMax(drr,rows,cols)<<endl;
    cout<<"Minimum element: "<<findMin(drr,rows,cols)<<endl;

    return 0;
}