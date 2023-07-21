#include<iostream>
using namespace std;
// abs() -> gives +ve value
int binarySearch(int dividend, int diviser){
    int s = 0;
    int e;
    if(dividend == INT_MIN && diviser == -1){
        return INT_MAX;
    }
    // e = abs(dividend);
    cout<<"e "<<e<<endl;
    // int e = abs(dividend);
    int mid = s + (e - s)/2;
    int ans = 0;
    while(s <= e){
        // perfect solution
        if(abs(mid*diviser) == abs(dividend)){
            cout<<"1 ";
            ans = mid;
            break;
            // return mid;
        }

        // not perfect solution
        if(abs(mid*diviser) > abs(dividend)){
            cout<<"2 ";
            // left search
            e = mid - 1;
        }
        else{
            cout<<"3 ";
            // ans store
            ans = mid;
            // right search
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }

    if((diviser < 0 && dividend < 0) || (diviser > 0 && dividend > 0)){
    return ans;
    }
    else{
    return -ans;
    }
    
}
int main(){

    // int dividend = -22;
    // int diviser = 7;
    int dividend = -2147483648;
    int diviser = -1;

    int quotient = binarySearch(dividend,diviser);
    cout<<"Quotient is "<< quotient <<endl;


    // Brute force using 2 for loops to get precision
    int precision;
    cout<<"Enter the precision you want: "; cin>>precision;
    double ans2 = abs(quotient);
    double step = 0.1;
    for (int i = 0; i < precision; i++)
    {
        for (double j = ans2; j*abs(diviser) <= abs(dividend) ; j = j + step )
        {
         ans2 = j;   
        }
        step = step/10;
    }

    if((diviser < 0 && dividend < 0) || (diviser > 0 && dividend > 0)){
    cout<<"Final quotient: "<<ans2<<endl;
    }
    else{
    cout<<"Final quotient: "<<-ans2<<endl;
    }
    
    return 0;
}

// class Solution {
// public:
//     int divide(int dividend, int divisor) {
//     long long int s = 0;
//     long long int e = abs(dividend);
//     if(dividend == INT_MIN && divisor == -1){
//         return INT_MAX;
//     }
//     if(dividend == INT_MIN && divisor == 1){
//         return INT_MIN;
//     }
//     if(dividend == INT_MAX && divisor == 1){
//         return INT_MAX;
//     }
//     if(dividend == INT_MAX && divisor == -1){
//         return -INT_MAX;
//     }
//     long long int mid = s + (e - s)/2;
//     long long int ans = 0;
//     while(s <= e){
//         // perfect solution
//         if(mid<INT_MAX/divisor && abs(mid*divisor) == abs(dividend)){
//             ans = mid;
//             break;
//             // return mid;
//         }

//         // not perfect solution
//         if(abs(mid*divisor) > abs(dividend)){
//             // left search
//             e = mid - 1;
//         }
//         else{
//             // ans store
//             ans = mid;
//             // right search
//             s = mid + 1;
//         }
//         mid = s + (e - s)/2;
//     }

//     if((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0)){
//     return ans;
//     }
//     else{
//     return -ans;
//     }
//     }
// };