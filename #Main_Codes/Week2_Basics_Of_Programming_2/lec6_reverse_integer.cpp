// Reverse an integer
#include<iostream>
#include<math.h>
using namespace std;

// counts how many digits present in number
int digitCount(int n){
    int count = 0;
    while (n>0)
    {
        n = n/10;
        count++;
    }
    return count;
}

// gives reverse of the number
int reverse(int n){
    
    int rem = 0;
    int number = 0;
    int i = digitCount(n)-1;
    while(n>0){
        rem = n%10;
        n = n/10;
        number = pow(10,i)*rem + number;
        i--;
    }
    return number;
}
int main(){
    int n; cout<<"Number : "; cin>>n;
    cout<<"Reverse : "<<reverse(n);
    // cout<<digitCount(n);

    return 0;
}

// SOLUTION:
// class Solution {
// public:
//     int reverse(int x) {
//         int reverse = 0;
        
       
//         while(x!=0){
//             int remainder = x%10;
//             if(reverse > (INT_MAX/10) || reverse < (INT_MIN/10)){
//                 return 0;
//             }
//             else{
//             reverse = reverse*10 + remainder;
//             }
//             x = x/10;
//         }
//         return reverse;
        
//     }
// };


// OR
// class Solution {
// public:
//     int reverse(int x) {
//         int ans = 0;
//         bool isNegative = false;
//         if(x <= INT_MIN){
//             return 0;
//         }

//         if(x < 0){
//             isNegative = true;
//             x = -x;
//         }

//         while(x>0){
//             if(ans > INT_MAX/10){
//                 return 0;
//             }
//             int digit = x%10;
//             ans = ans * 10 + digit;
//             x = x/10;
//         }
//         return isNegative ? -ans : ans;
//     }
// };