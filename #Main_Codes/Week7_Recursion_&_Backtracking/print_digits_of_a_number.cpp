// Printing digits of a number
#include<iostream>
using namespace std;
void printDigits(int n){
    // base case - rookna kab hai
    if(n==0){
        return;
    }

    // 1 case solve kar do
    int ans = n%10;

    // baaki recursion sambhal lega
    printDigits(n/10);

    // recursive call ke baad likh diya taaki sahi order print ho
    cout<<ans<<endl; 
}
int main(){
    int n = 647;
    cout<<"Actual number is: "<<n<<endl;
    printDigits(n);
    return 0;
}