#include<iostream>
#include<cmath>
using namespace std;

// division method
int decimalToBinaryMethod1(int n){
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
    int bit = n % 2;
    ans = pow(10,i++)*bit + ans;
    n = n/2;
    // i++;
    }
    return ans;
}

// bitwise method
int decimalToBinaryMethod2(int n){
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
    int bit = n&1;
    ans = pow(10,i++)*bit + ans;
    n = n>>1;
    // i++;
    }
    return ans;
}
int main(){
    int n; cin>>n;
    int bynaryNo = decimalToBinaryMethod1(n);
    cout<<bynaryNo<<endl;

    int bynaryNo2 = decimalToBinaryMethod2(n);
    cout<<bynaryNo2<<endl;
    return 0;
}