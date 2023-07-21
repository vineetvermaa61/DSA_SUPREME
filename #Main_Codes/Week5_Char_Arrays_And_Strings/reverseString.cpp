#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
// Two pointer approach
void reverseCharactor(char name[]){
    int i = 0;
    // int n = strlen(name);
    int n = strlen(name);
    int j = n - 1;
    while(i <= j){
        swap(name[i], name[j]);
        i++;
        j--;
    }
}
int main(){
    char name[100];
    cin>>name;

    cout<<"Before reverse: "<<name<<endl; 
    reverseCharactor(name);
    cout<<"After reverse: "<<name<<endl;

    return 0;
}