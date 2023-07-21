// Number of set bits
#include<iostream>
using namespace std;

int main(){
    int ans = 0;
    int n; cin>>n;
    while (n!=0)
    {
        if(n&1){
            ans++;
        }
        n = n >> 1; // right shift
    }
    cout<<"Number of set bits: "<<ans;
    
    
    return 0;
}