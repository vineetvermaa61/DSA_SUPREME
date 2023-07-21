#include<iostream>
#include<string.h>
using namespace std;

int main(){
char name [30];
cout << "please enter your full name : ";
cin.getline( name,29);
cout << "hello " << name << endl;
    return 0;
}