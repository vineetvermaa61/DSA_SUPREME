// set kth bit
#include<iostream>
using namespace std;
int set_Kth_Bit(int n, int k){
    int mask = 1<<k;
    return n|mask;
}
int main(){
    int n; cin>>n;
    int k; cin>>k;
    cout<<set_Kth_Bit(n,k);

    return 0;
}