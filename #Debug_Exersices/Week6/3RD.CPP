// Debug the code. Why is the code not returning the expected output?
#include<iostream>
using namespace std;
int* foo() {
    int x = 10;
    int* p = &x;
    cout<< "Inside foo: "<< &x <<endl;
    return p;
}
int main() {
    cout<< "Inside main: "<< foo() <<endl;
    int* q = foo();
    cout << *q << endl; // Expected output: 10, Actual output: some random value
    return 0;
}

// GIVEN:
// int* foo() {
//     int x = 10;
//     int* p = &x;
//     return p;
// }

// int main() {
//     int* q = foo();
//     cout << *q << endl; // Expected output: 10, Actual output: some random value
//     return 0;
// }

// SOLUTION:
// int* foo() {
//     int* p = new int; // Fix // POINTER BANAYA
//     *p = 10;                 // PONITER DEREFERENCE KIYA AUR USMEIN VALUE DAALI, p par jao uske andar jo addess pada hai wahan par 10 daal do
//     return p;                // ADDRESS RETRUN KIYA, p ke andar jo adresss pada hai wo return kar do
// }

// int main() {
//     int *q = foo();
//     cout << *q << endl;
//     return 0;
// }