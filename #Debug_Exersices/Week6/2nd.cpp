// Debug the code. Why is the code crashing when trying to dereference a pointer?
#include<iostream>
using namespace std;
// *******************MAKE DIAGRAM********************
int main(){
    int* p = NULL;  // fix
    *p = 42; // kyonki p ek poiter hai jo null ko point kar raha jo exist nahin karta aur hum p MEIN JO VALUE PADI HAIN MATLAB NULL USPAR JAKAR 42 DAALNA CHAH RAHE JO KI NOT POSSIBLE
    return 0;
}

// GIVEN:
// int main() {
//     int* p = NULL;
//     *p = 42;
//     return 0;
// }

// SOLUTION:
// int main() {
//     int* p = new int;
//     *p = 42;
//     delete p;
//     return 0;
// }