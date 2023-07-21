// *  *  *  *  *  
// *  *  *  *  *  
// *  *  *  *  *  
// *  *  *  *  *  
// *  *  *  *  *  
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    // Outer Loop - row observe
    for (int row = 0; row < n; row++){
    // Inner Loop - column observe
        for (int col = 0; col < n; col++){
            cout<<"*  ";
        }
        cout<<endl;
    }
    
    return 0;
}