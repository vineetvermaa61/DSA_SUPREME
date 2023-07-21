//1. Add integers from 1 to N and display the sum on console.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;++i){
        sum+=i;
    }
    cout<<sum<<endl;
		return 0;
}


// // GIVEN:
// void main(){
//     int n;cin>>n;
//     int8_t sum=0;
//     for(int i=0;i<n;++i){
//         sum+=i;
//     }
//     cout<<sum<<endl;
// 		return 0;
// }

// SOLUTION:
// void main(){
//     int n;cin>>n;
//     int8_t sum=0;
//     for(int i=1;i<=n;++i){
//         sum+=i;
//     }
//     cout<<(int)sum<<endl;
//     return 0;
// }