// *  *  *  *  *  *  
// *              *  
// *              *  
// *              *  
// *              *  
// *  *  *  *  *  * 
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if(row == n-1 || row ==0 || col ==0 || col ==n-1){
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