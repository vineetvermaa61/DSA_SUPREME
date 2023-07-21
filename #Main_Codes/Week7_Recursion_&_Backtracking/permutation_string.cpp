// INPUT: abc    OUTPUT: abc acb bac bca cba cab
#include<iostream>
using namespace std;

void printPermutation(string &str, int i){
    // base case - Jab i string se bahar nikal jaye to string ko print kar do aur return kar jao
    if(i >= str.length() ){
        cout<<str<<" ";
        return;
    }

    // swapping 
    for (int j = i; j < str.length(); j++)
    {
        // sawp
        swap(str[i], str[j]);

        // recursive call
        printPermutation(str, i+1);

        // backtracking - to recreate the original input
        swap(str[i], str[j]);
        // OR we can remove call by reference
    }
}
int main(){
    string str = "abc";
    int i = 0;
    printPermutation(str, i );
    return 0;
}