#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
// TC - O(n)   SC - O(1)
// Two pointer approach
bool palindrome(char name[]){
    int i = 0;
    int n = strlen(name);
    int j = n-1;
    while(i<=j){
        if(name[i] != name[j]){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}
int main(){
    char name[100];
    // taking input with spaces
    cout<<"Enter name: ";
    cin>>name; 

    if(palindrome(name)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"NOT Palindrome"<<endl;
    }

    return 0;
}