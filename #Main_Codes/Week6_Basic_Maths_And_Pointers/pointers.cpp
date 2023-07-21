#include<iostream>
using namespace std;

int main(){
    // int a = 5;
    // int b = 5;
    // cout << a <<endl;
    // // &  -> ADDRESS OF operator
    // cout << &a <<endl; // here ADDRESS OF a
    // cout << &b <<endl;



    // int c = 6;
    // // pointer create
    // // ptr is a pointer to c which contain integer data 
    // int* ptr = &c; 

    // // acess the value ptr is pointing to
    // cout<< "Address of c is: "<< &c <<endl;
    // cout<< "Value stored at ptr is: " << ptr <<endl;
    // cout<< "Value ptr is pointing to is: " << *ptr <<endl;
    // cout<< "ptr ka apna adress: " << &ptr <<endl;


    // ****SIZE OF POINTER WILL BE SAME FOR ALL CASES****
    // int a =5;
    // int*p = &a;
    // cout<<sizeof(p)<<endl;

    // char ch = 'b';
    // char* c = &ch;
    // cout<<sizeof(c)<<endl;

    // double dtr = 5.03;
    // double* d = &dtr;
    // cout<<sizeof(d)<<endl;



    // *****BAD PRACTICE -> SEGMENTATION FAULT **********
    // int* ptr;
    // cout<< *ptr <<endl;

    // GOOD PRACTICE
    // NULL POINTER
    // int* ptr = 0;
    // OR  
    // int* ptr = NULL;
    // OR  
    // int* ptr = nullptr;

    // cout<< *ptr <<endl;



    // int a = 5;
    // int *p = a; // gives error, kyonki pointer keval address store karta hai


    // int a = 5;
    // int *p = &a;
    // // copy pointer
    // int *dusraPointer = p;
    // cout<< p <<endl;
    // cout<< dusraPointer <<endl;
    // cout<< *p <<endl;
    // cout<< *dusraPointer <<endl;




    int a = 10;
    int* p = &a;
    int* q = p;
    int *r = q;

    cout << a <<endl; // 10
    cout << &a <<endl;  // address of a
    cout << p <<endl;  // address of a
    cout << &p <<endl; // address of p
    cout << *p <<endl; //10 (p ke andar ke dibbe mein jo value (address) pada hai us address par jakar usse connected value print karoge )
    cout << q <<endl; // address of a
    cout << &q <<endl; // address of q
    cout << *q <<endl; // 10
    cout << r <<endl; // address of a
    cout << &r <<endl; // address of r
    cout << *r <<endl; // 10
    cout << (*p + *q + *r) <<endl;  // 10+10+10 = 30
    cout << (*p)*2 + (*r)*3 <<endl; // 10*2 + 10*3 = 50
    cout << (*p/2) - (*q)/2 <<endl; // 10/2-10/2 = 0

    return 0;
}