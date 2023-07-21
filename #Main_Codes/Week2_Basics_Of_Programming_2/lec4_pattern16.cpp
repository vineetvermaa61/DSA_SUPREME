// ****** ******
// *****   *****
// ****     ****
// ***       ***
// **         **
// *           *
// *           *
// **         **
// ***       ***
// ****     ****
// *****   *****
// ****** ******

#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for (int row = 0; row < n; row++)
    {
        // half pyramid
        for (int col = 0; col < n-row; col++)
        {
            cout<<"*";
        }
        // space wala full pyramid
        for (int col = 0; col < 2*row+1; col++)
        {
            cout<<" ";
        }
        // remaining half pyramid
        for (int col = 0; col < n-row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    // lower part:

    for (int row = 0; row < n; row++)
    {
        // inverted half pyramid
        for (int col = 0; col < row+1; col++)
        {
            cout<<"*";
        }
        // inverted full space pyramid
        for (int col = 2*n-2*row-1; col > 0; col--)
        {
            cout<<" ";
        }
        // inverted half pyramid
        for (int col = 0; col < row+1; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}