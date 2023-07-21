#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for (int row = 0; row < n; row++)
    {
        // spaces
        for (int col = 0; col < n-row-1; col++)
        {
            cout<<" ";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout<<row+col+1;
        }

        // reverse counting:
        int start2 = 2*row;
        for (int col = 0; col < row; col++)
        {
            cout<<start2;
            start2--;
        }
        
        cout<<endl;
    }
    
    return 0;
}