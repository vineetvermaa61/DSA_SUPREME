// 1 
// 1 2 1
// 1 2 3 2 1
// 1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
// #include<iostream>
// using namespace std;

// int main(){
//     int n; cin>>n;
//     for (int row = 0; row < n; row++)
//     {
//         int col;
//         for ( col = 0; col < row+1; col++)
//         {
//             cout<<col+1;
//         }
//         col = col-1;

//         // reverse number print
//         for ( ; col >= 1; col = col-1)
//         {
//             cout<<col;
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
            cout<<col+1<<" ";
        }

        // reverse number print
        for (int col = row ; col >= 1; col = col-1)
        {
            cout<<col<<" ";
        }
        
        cout<<endl;
    }
    
    return 0;
}