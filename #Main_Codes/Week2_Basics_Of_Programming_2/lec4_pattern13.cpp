// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for (int row = 0; row < n; row++)
    {
        int count = row+1;
        for (int col = count; col <= n; col++)
        {
            cout<<" "<<count;
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
//                 cout<<" "<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }