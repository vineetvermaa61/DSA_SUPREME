#include<iostream>
using namespace std;

bool findKey(int arr[][3], int rows, int cols, int key){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
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

    int key;
    cout<<"Enter key: "<<endl;
    cin>>key;
    if(findKey(drr,rows,cols,key)){
        cout<<"Key Present"<<endl;
    }else{

        cout<<"Key Absent"<<endl;
    }

    return 0;
}