// 1 2 3 4 5 
// 2     5
// 3   5
// 4 5
// 5
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row; col++)
        {
            if (row==0 || col ==0 || col == n-row-1)
            {
                cout<<row+col+1<<" ";
            }
            else{
                cout<<"  ";
            }
        }
            cout<<endl; 
    }
    
    return 0;
}