#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
// TC - O(n)   SC - O(1)
// Two pointer approach
void convertIntoUppercase(char name[]){
    int n = strlen(name);
    for (int i = 0; i < n; i++)
    {
        name[i] = name[i] - 'a' + 'A';
    }
}
void convertIntoLowercase(char name[]){
    int n = strlen(name);
    for (int i = 0; i < n; i++)
    {
        name[i] = name[i] - 'A' + 'a';
    }
}
int main(){
    char name[100];
    cout<<"Enter name: ";
    cin>>name; 

    cout<<"Before: "<<name<<endl;
    (convertIntoUppercase(name));
    cout<<"After: "<<name<<endl;
    (convertIntoLowercase(name));
    cout<<"After this also: "<<name<<endl;
    
    return 0;
}