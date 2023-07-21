#include<iostream>
using namespace std;

void util(int* p){
    // p = p + 1;
    * p = *p + 1;
}

void solve(int** ptr){
    // ptr = ptr + 1;
    // *ptr = *ptr + 1;
    **ptr = **ptr + 1;
}

void solved(int& num){
    // num++;
    num = 300;
}

void solver(int* val){
    *val = *val + 1;
}

// void solving(int* p){ // pass by value
void solving(int*& p){  // pass by reference
    p = p + 1;
}

int main(){
    // int a = 5;
    // int* p = &a;

    // int** q = &p;

    // cout << &a <<endl;
    // cout << a <<endl;
    // cout << p <<endl;
    // cout << &p <<endl;
    // cout << *p <<endl;
    // cout << q <<endl;
    // cout << &q <<endl;
    // cout << *q <<endl;
    // cout << **q <<endl;

// ***************************** 

    // int a = 5;

    // int* p = &a;

    // cout<<"Before "<<endl;
    // cout << a <<endl;
    // cout << p <<endl;
    // cout << *p <<endl;
    // cout<<endl;

    // util(p);

    // cout<<"After "<<endl;
    // cout << a <<endl;
    // cout << p <<endl;
    // cout << *p <<endl;


// ***************************** 
    // int x = 12;
    // int* p = &x;
    // int** q = &p;

    // solve(q);

    // cout << x <<endl;

// *****************************

    // int a = 5;
    // int* p = &a;
    // int** ptr = &p;
    // int **ptr = p; // ptr is pointer to int* type ka data, magar hum ise  int type ka data de rahe  => error 

    // **ptr = *ptr + 1; // integer ke andar pointer store kar rahe => error 
    // **ptr = **ptr + 1;


// *****************************
    // REFERENCE VARIABLE:

    // int a = 5;

    // // creating a reference variable
    // int& b = a; // SAME MEMORY LOCATION DIFFERENT NAME

    // cout << a <<endl;
    // cout << b <<endl;

    // a++;
    // cout << a <<endl;
    // cout << b <<endl;

    // b++;
    // cout << a <<endl;
    // cout << b <<endl;

    // b = 300;
    // cout << a <<endl;
    // cout << b <<endl;

// *****************************
    // int a = 5;

    // solved(a);

    // cout<< a <<endl;

// *****************************

    // int a = 12;
    // solver(&a);
    // OR
    // int a = 12;
    // int *p = &a;
    // solver(p);


    // cout<< a <<endl;


// *****************************
    //  pointer ko pass by reference
    int a = 5;
    int*p = &a;

    cout<< "Before "<< p <<endl;
    solving(p);
    cout<< "After "<< p <<endl;

    return 0;
}