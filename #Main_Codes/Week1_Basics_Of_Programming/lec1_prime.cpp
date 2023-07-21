#include<iostream>
using namespace std;
// bool isPrime(int n){

// }
int main(){
    cout<<"Enter number: ";
    int n; cin>>n;

    // bool has either 0 or 1 as value
    bool mark = 1;
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0){
            mark = 0;
            break;
        }
    }
    
    if(mark == 0){
        cout<<"Not Prime!"<<endl;
    }
    else{
        cout<<"Prime!"<<endl;
    }

    return 0;
}