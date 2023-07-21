#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"a: "<<"b: "<<"c: ";
    cin>>a>>b>>c;
    if(a >= b && a >= c){
        cout<<"Max = "<<a<<endl;
    }
    else if(b >= a && b >= c){
        cout<<"Max = "<<b<<endl;
    }
    else{
        cout<<"Max = "<<c<<endl;
    }


    cout<<endl<<"Alternate Method"<<endl;
    int max_value = (a>=b)? ( (a>=c)? a : c ) : ((b>=c)? b : c);
    cout<<"Max: "<<max_value<<endl;

    cout<<endl<<"Alternate Method"<<endl;
    cout<<"Max: "<<max((a,b),c)<<endl;

    return 0;
}