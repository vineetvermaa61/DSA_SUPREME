#include<iostream>
using namespace std;
void printCounting(int n){

    // base case
    if(n==0){
        return;
    }

    printCounting(n-1);
    // processing
    cout << n << " ";

    // recursive call
    // printCounting(n-1);
}
int main(){
    int n;
    cout<< "Enter n: ";
    cin>>n;

    printCounting(n);

    return 0;
}