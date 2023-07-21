#include<iostream>
using namespace std;

int main(){
    int x = 97;
    int y = sizeof(x++);
    cout<<x;
    return 0;
}