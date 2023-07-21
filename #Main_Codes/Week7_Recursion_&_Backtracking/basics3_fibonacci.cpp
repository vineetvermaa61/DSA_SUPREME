#include<iostream>
using namespace std;
int fib(int n){
    // base case
    // 1st term is 0
    if(n == 1){
        return 0;
    }
    // 2nd term is 1
    if(n == 2){
        return 1;
    }

    // recursive relation
    int ans = fib(n-1) + fib(n-2);

    return ans;
}
int main(){
    int n;
    cout << "Enter n: "; cin>>n;
    int ans = fib(n);
    cout << n << "th term is "<< ans <<endl;
    return 0;
}