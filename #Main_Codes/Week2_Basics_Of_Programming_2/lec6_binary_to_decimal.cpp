#include<iostream>
#include<cmath>
using namespace std;
int binaryToDecimal(int n){
    int ans = 0;
    int i = 0;
    while (n)
    {
        int bit = n % 10; 
        ans = ans + bit * pow(2,i++);
        n = n/10;
    }
    return ans;
}
int main(){
    int n; cin>>n;
    int number = binaryToDecimal(n);
    cout<<number<<endl;
    return 0;
}