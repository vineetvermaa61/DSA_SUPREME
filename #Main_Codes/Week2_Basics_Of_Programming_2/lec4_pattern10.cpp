//             *
//          *  *  *
//       *  *  *  *  *
//    *  *  *  *  *  *  *
//    *  *  *  *  *  *  *
//       *  *  *  *  *
//          *  *  *
//             *
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    // solid triangle
    for (int row = 0; row < n; row++)
    {
        // spaces
        for (int column = 0; column < n - row - 1 ; column++)
        {
            cout<<"  ";
        }

        // stars
        for (int column = 0; column < row + 1; column++)
        {
            cout<<" *  ";
        }
        
        cout<<endl;
        
    }

    // Inverted solid triangle
    for (int row = 0; row < n; row++)
    {
        for (int column = 0; column < row; column++)
        {
            cout<<"  ";

        }
        for (int column = 0; column < n-row; column++)
        {
            cout<<" *  ";
        }
        cout<<endl;
    }
    
    return 0;
}