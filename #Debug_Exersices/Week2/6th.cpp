// 6. Convert given Binary number to Decimal.
// ********************IMPORTANT********************
#include<iostream>
using namespace std;
int binaryToDecimal(int b){
    int ans = 0;
    int c = 0;
    while(b){
        ans = ans + (b % 10) * (1 << c++);
        // cout<<"c= "<<c<<endl;
        b/=10;
    }
    return ans;
}
int main(){
    cout<<"Decimal: "<<binaryToDecimal(111);  // 7
    return 0;
}


// GIVEN:
// int binaryToDecimal(int b){
//     int ans;
//     int c=0;
//     while(b){
//         ans=(b % 10) * (1 << c++);
//         b/=10;
//     }
//     return ans;
// }

// SOLUTION:
// int binaryToDecimal(int b){
//     int ans=0;
//     int c=0;
//     while(b){
//         ans=ans+(b % 10) * (1 << c++);
//         b/=10;
//     }
//     return ans;
// }