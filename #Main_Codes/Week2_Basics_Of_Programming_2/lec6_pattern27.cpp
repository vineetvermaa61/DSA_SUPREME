// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for (int row = 0; row < n; row++)
    {
        // stars
        for (int col = 0; col < n+3-row; col++)
        {
            cout<<"*";
        }

        // pattern
        for (int col = 0; col < row+1; col++)
        {
            cout<<row+1;
            if (col != row)
            {
                cout<<"*";
            }
        }

        // stars
        for (int col = 0; col < n+3-row; col++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;
}