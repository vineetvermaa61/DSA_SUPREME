// Climbing Stairs
#include<iostream>
using namespace std;
int climb_stairs(int n){

    // base case - rookna kab hai
    if(n==0 || n==1){
        return 1;
    }

    // recursive relation
    int ans = climb_stairs(n-1) + climb_stairs(n-2);
    return ans;

}
int main(){
    int n;
    cout<<"Enter the no. of stairs: "; cin>>n;
    int ans = climb_stairs(n);

    cout<<"Answer is: "<<ans<<endl;

    return 0;
}