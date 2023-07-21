//     1    
//    1 2   
//   1   3  
//  1     4 
// 1 2 3 4 5

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
        // numbers with spaces in between
        int start = 1;
        for (int col = 0; col < 2*row+1; col++)
        {
            if (row == 0 || row == n-1)
            {
                // even
                if(col%2 ==0){
                cout<<start;
                start++;
                }
                // odd
            else cout<<" ";
            }
            else{
                // first column
            if (col==0)
            {
                cout<<1;
            }
                // last column
            else if(col==2*row+1-1){
                cout<<row+1;
            }
            else{
                cout<<" ";
            }   
            } 
        }

    cout<<endl;
    }
    
    return 0;
}

// 1    
// 1 2   
// 1   3  
// 1     4 
// 1 2 3 4 5
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < row+1; col++)
//         {
//             if(col==0 || row == n-1 || col ==row){
//             cout<<col+1;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }