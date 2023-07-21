// This program declares an integer array of size 5 and initializes it with values 1, 2, 3, 4, and 5. Then, it attempts 
// to print the elements of the array using a loop. However, there's an error in the loop that you need to debug. 
// Can you find it and fix it?
#include <iostream>
using namespace std;

int main() {
   int arr[5] = {1, 2, 3, 4, 5};
   for(int i = 0; i <= 4; i++) {
      cout << arr[i] << " ";
   }  
   return 0;
}

// GIVEN:
// #include <iostream>
// using namespace std;

// int main() {
//    int arr[5] = {1, 2, 3, 4, 5};
//    for(int i = 1; i <= 5; i++) {
//       cout << arr[i] << " ";
//    }  
//    return 0;
// }

// SOLUTION:
// void main(){
//     int n;cin>>n;
//     int8_t sum=0;
//     for(int i=1;i<=n;++i){
//         sum+=i;
//     }
//     cout<<(int)sum<<endl;
//     return 0;
// }