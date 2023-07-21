#include<iostream>
using namespace std;

int main(){
    // declaration of 2d array
    int arr[3][4];

    // intialization of 2d array
                    // row0    row1    row2
    int crr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // accessing an element
    int brr[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};
                    
                    cout<<"brr[2][2] = "<<brr[2][2]<<endl;
                    cout<<"brr[0][0] = "<<brr[0][0]<<endl;
                    cout<<"brr[0][1] = "<<brr[0][1]<<endl;

    // row wise access/print
    cout<<"row wise access/print"<<endl;
    // outer loop
    for (int i = 0; i < 3; i++)
    {
        // for every row, we need to print value in each column
        for (int j = 0; j < 3; j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    // column wise access/print
    cout<<"column wise access/print"<<endl;
    // outer loop
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<brr[j][i]<<" ";
        }
        cout<<endl;
    }

    // row wise input
    int drr[4][3];
    int rows = 4; // for better understanding
    int cols = 3;
    cout<<"Enter row and cols element: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>drr[i][j];
        }
        
    }
    // printing
    cout<<"Printing 2d array: "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<drr[i][j]<<" ";
        }
        cout<<endl;
    }

    // column wise input
    int err[3][3];
    int rows1 = 3; // for better understanding
    int cols1 = 3;
    cout<<"Enter row and cols element: ";
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            cin>>err[j][i];
        }
        
    }
    // normal print
    cout<<"Printing 2d array: "<<endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            cout<<err[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}