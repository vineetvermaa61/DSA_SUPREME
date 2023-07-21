#include<iostream>
using namespace std;
int factorial(int n){
    cout << "Function is called for " << n << endl;
    // BASE CASE:
    if(n == 1){
        return 1;
    }

    int chotiProblemAns = factorial(n-1);
    int badiProblemAns = n * chotiProblemAns;

    return badiProblemAns;
}
int main(){
    int n = 5;
    int ans = factorial(n);
    cout<< "Factorial is: "<< ans <<endl;
    return 0;
}