#include<iostream>
using namespace std;

int main(){
    int* p = new int;
    *p = 10;
    delete p;
    return 0;
}

// GIVEN:
// int main() {
//     int* p;
//     *p = 10;
//     return 0;
// }

// SOLUTION:
// int main(){
// 	int* p;
// 	*p = 10;
// 	return 0;
// }