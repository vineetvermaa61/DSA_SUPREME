//             *
//          *     *
//       *           *
//    *  *  *  *  *  *  *
// #include<iostream>
// using namespace std;

// int main(){
//     int n; cin>>n;
//     for (int row = 0; row < n; row++){

//         // spaces
//         for (int column = 0; column < n - row - 1 ; column++){
//             cout<<"  ";
//         }

//         // stars
//         for (int column = 0; column < row + 1; column++){
//             if(column == 0 || row == n-1 || row == column){
//             cout<<" * ";
//             }
//             else{
//             cout<<"   ";
//         }
//         }

//         cout<<endl;
//     }
    
//     return 0;
// }

// Alternate
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++){
//         int k = 0;
//         for (int j = 0; j < ((2*n)-1); j++){
//             if (j<n-i-1){
//                 cout<<" ";
//             }else if(k<2*i+1){
//                 if (k==0 || k == 2*i || i == n-1)
//                     cout<<"*";
//                 else
//                     cout<<" ";
//                     k++;
//             } else{
//                 cout<<" ";
//             }            
//         }
//         cout<<endl;
        
//     }
    
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        int k = 0; // k is counting starts from where first star prints
        for (int col = 0; col < 2*n-1; col++)
        {
            if (col<n-row-1)
            {
                cout<<" ";
            }
            // else if(col<n+row){
            else if(k< (2*row)+1){
            if (k==0 || k == 2*row || row == n-1)
            cout<<"*";
            else
                cout<<" ";
            k++;
            
            }
            else{
                cout<<" ";
            }            
        }
        cout<<endl;
    }
    
    
    return 0;
}