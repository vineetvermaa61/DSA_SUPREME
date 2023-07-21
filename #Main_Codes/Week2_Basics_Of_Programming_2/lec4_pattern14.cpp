// 1 2 3 4 5
// 2     5
// 3   5
// 4 5
// 5
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for (int row = 0; row < n; row++)
    {
        int count = row + 1;
        for (int col = count; col <= n; col++)
        {
            if (row == 0 || col == row + 1 || count == n )
            cout<<" "<<count;
            else
            cout<<"  ";
            
            count++;
        }
        cout<<endl;
    }
    
    return 0;
}


// Alternate

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i){
//         for(int j=i+1;j<=n;j++){
//             if(j==i+1 || j == n || i == 0){
//                 cout<<" "<<j;
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }