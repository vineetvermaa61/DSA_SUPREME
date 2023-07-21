#include<iostream>
using namespace std;

int main(){


    // compiler dependent:
    // -------------------------------------

    // char ch = -82;
    // cout<<ch<<endl;

    int age = 2;

    // Ternary Operator:
    // -------------------------------------

    // (age>=18)? cout<<"Can Vote" : cout<<"Cannot Vote";
    // return 0;


    // Switch Case Experiment:
    // -------------------------------------

    // int val = 2.6; // works
    // int val = 2; // works
    // int val = true; // works when boolean means only total two cases present
    // int val = a; // not works
    // int val = abc; // not works
    int val =  1 ; //  works
    switch (val)
    {
    // case 2.6: // not works
    // case 3+2*1+0: // works
    // case 5>3>1: // works
    case 3>1: // works, 1 takes as case
        cout<<"1 likha hai";
        break;
    // case true:
    //     cout<<"2 likha hai";
    //     break;
    // case true:
    //     cout<<"3 likha hai";
    //     break;
    
    default:
        cout<<"kya likha hai";
        break;
    }
} 