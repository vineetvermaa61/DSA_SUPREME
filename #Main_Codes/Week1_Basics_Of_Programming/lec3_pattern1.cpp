//  *  *  *  *  * 
//  *  *  *  *  * 
//  *  *  *  *  * 
#include<iostream>
using namespace std;

int main(){
    // Outer Loop - row observe
    for (int row = 0; row < 3; row++){
    // Inner Loop - column observe
        for (int col = 0; col < 5; col++){
            cout<<" * ";
        }
        cout<<endl;
    }
    
    return 0;
}