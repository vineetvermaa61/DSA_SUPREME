#include<iostream>
using namespace std;

int main(){
    int y = 1;
    if(y & (y = 2)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    cout<<!!10;
    return 0;
}