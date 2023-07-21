#include<iostream>
using namespace std;
int area(int r){
    int area = (22/7)*r*r;
    return area;
}
int main(){
    int n; cin>>n;
    cout<<area(n)<<endl;
    return 0;
}