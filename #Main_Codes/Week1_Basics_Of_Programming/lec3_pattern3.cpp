//  *  *  *  *  * 
//  *           * 
//  *  *  *  *  * 
#include<iostream>
using namespace std;

int main(){
    int row_count;  cin>>row_count;
    int col_count;  cin>>col_count;

    for (int row = 0; row < row_count; row++){
        if (row==0 || row == row_count-1){
        for (int col = 0; col < col_count; col++){
                cout<<"*  ";
            }
        }
            else{
                cout<<"*  ";
                for (int col = 0; col < col_count-2; col++){
                    cout<<"   ";
                }
                cout<<"*  ";
            }
        cout<<endl;
    }
    return 0;
}


// ALTERNATE

#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    // Outer Loop - row observe
    for (int row = 0; row < n; row++){
    // Inner Loop - column observe
        for (int col = 0; col < n; col++){
            // agar first row ya last row ya first columns ya last column ho sirf tabhi * print karo
            if(row == 0 || row == n-1 || col == 0 || col == n-1){
            cout<<"*  ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}