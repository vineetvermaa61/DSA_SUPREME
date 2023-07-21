// *  *  *  *  *  *
// *           *
// *        *
// *     *
// *  *
// *
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row; col++)
        {
            // agar first row ya column ho, ya (n-row-1)th col ho sirf tab hi * print karo
            if (row == 0 || col == 0 || col == n-row-1)
            {
            cout<<"*  ";
            }
            // spaces
            else{
                cout<<"   ";
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}
