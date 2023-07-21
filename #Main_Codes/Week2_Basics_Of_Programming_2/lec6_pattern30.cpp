// *      
// *1*    
// *121*  
// *12321*
// *121*  
// *1*    
// *
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            // before first column print *
            if (col==0)
            {

            // only before first row print *
                if (row==0)
                {
                    cout<<"*"<<endl;
                }

                cout<<"*";
            }
            // print numbers
            cout<<col+1;
            // edge case: for 0th row and 0th column print *
            if (col == 0 && row==0)
            {
                cout<<"*";
            }
        }
        // reverse counting
        for (int col = row; col >= 1; col--)
        {
            cout<<col;
            // after 1 print *
            if (col == 1)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }

    // reverse pattern:
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row-1; col++)
        {
            // // before first column print *
            if (col==0)
            {
                cout<<"*";

            }
            
            // print numbers
            cout<<col+1;
             // // edge case: for (n-2)th row and 0th column print *
            if (col == 0 && row==n-2)
            {
                cout<<"*";
            }
        }
        // reverse counting
        for (int col = n-row-2; col >= 1; col--)
        {
            cout<<col;
            // after 1 print *
            if (col == 1)
            {
                cout<<"*";
            }
            
        }
       
        // only after last row print *
                if (row==n-1)
                {
                    cout<<"*"<<endl;
                }
        cout<<endl;
    }
    
    return 0;
}