// A 
// A B A 
// A B C B A         
// A B C D C B A     
// A B C D E D C B A 

// #include<iostream>
// using namespace std;

// int main(){
//     int n; cin>>n;
//     for (int row = 0; row < n; row++)
//     {
//         int col;
//         for ( col = 0; col < row+1; col++)
//         {
//          int ans = col+1;
//             char ch = ans + 'A'-1;
//             cout<<ch<<" ";
//         }
//         col = col-1;

//         // reverse number print
//         for ( ; col >= 1; col = col-1)
//         {
//          int ans = col;
//             char ch = ans + 'A'-1;
//             cout<<ch<<" ";
//         }
        
//         cout<<endl;
//     }
    
//     return 0;
// }

// Alternate:

#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            int ans = col+1; // col+1 ki value jo ki 1 hai ko ans mein store karaya
            char ch = ans + 'A'-1;  // phir ans ko ch ke sath map kiya
            cout<<ch<<" "; // phir ch ko print kar diya
        }

        // reverse number print
        for (int col = row ; col >= 1; col = col-1)
        {
            int ans = col;
            char ch = ans + 'A'-1;
            cout<<ch<<" ";
        }
        
        cout<<endl;
    }
    
    return 0;
}