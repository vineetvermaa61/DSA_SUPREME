// 3       
// 4 4     
// 5 5 5   
// 6 6 6 6 
// 5 5 5   
// 4 4     
// 3
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<n+row-1<<" ";
        }

       
        cout<<endl;

    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row-1; col++)
        {
            cout<<n-row+1<<" ";
        }

       
        cout<<endl;

    }
    
    return 0;
}