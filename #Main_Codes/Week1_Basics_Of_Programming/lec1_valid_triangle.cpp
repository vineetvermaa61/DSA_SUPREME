#include<iostream>
using namespace std;
    bool validity(int a, int b, int c){
        if(a + b <= c || b + c <= a || a + c <= b){
            // return false;
            return 0;
        }
        else{
        // return true;
        return 1;
        }
    }
int main(){
    int a,b,c;
    cout<<"a: "<<"b: "<<"c: ";
    cin>>a>>b>>c;
    if(validity(a,b,c)){
        cout<<"Valid triangle"<<endl;
    }
    else
        cout<<"Invalid triangle"<<endl;
    return 0;
}