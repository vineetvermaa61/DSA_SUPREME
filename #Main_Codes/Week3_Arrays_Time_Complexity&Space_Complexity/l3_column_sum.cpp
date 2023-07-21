#include<iostream>
using namespace std;

// when we pass an multidimention array in a fuction except first bracket remaining should NOT BE EMPTY(should be BOUNDED)
void rowSum(int arr[][3], int rows, int cols){
    // WE HAVE TO TRAVERSE ROW-WISE AS WE NEED ROW-SUM
    cout<<"Printing column-wise sum: "<<endl;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[j][i];
        }
        cout<<sum<<endl;
    }
}

int main(){
    // row wise input
    int drr[3][3];
    int rows = 3; // for better understanding
    int cols = 3;
    cout<<"Enter row and cols element: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>drr[i][j];
        }
        
    }
    rowSum(drr,rows,cols);

    return 0;
}