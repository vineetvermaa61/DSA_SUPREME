#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char name[100];
    cin>>name;
    int i =0;
    int lenght = 0;
    while(name[i] != '\0'){
        lenght++;
        i++;
    }

    cout<<"lenght is "<<lenght<<endl;

    // predefined length function
    cout<<"Lenght => "<< strlen(name) <<endl;
    return 0;
}