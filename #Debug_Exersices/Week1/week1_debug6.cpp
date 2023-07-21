// Print Numeric Hollow Inverted Half Pyramid (Click the hyper link to understand the output)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<=n;j++){
            if(j==i+1 || j == n || i == 0){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

// Given: 

// void main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i){
//         for(int j=j+1;j<=n;j++){
//             if(j==i+1 || j == n - i - 1 || i == 0){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Solution:

// void main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i){
//         for(int j=i+1;j<=n;j++){
//             if(j==i+1 || j == n || i == 0){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }


// 1 2 3 4 5
// 2     5
// 3   5
// 4 5
// 5
// #include<iostream>
// using namespace std;

// int main(){
//     int n; cin>>n;
//     for (int row = 0; row < n; row++)
//     {
//         int count = row + 1;
//         for (int col = count; col <= n; col++)
//         {
//             if (row == 0 || col == row + 1 || count == n )
//             cout<<" "<<count;
//             else
//             cout<<"  ";
            
//             count++;
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }
