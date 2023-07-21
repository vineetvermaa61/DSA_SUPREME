// Print solid square pattern.
#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            cout<<"*  ";
        }
        cout<<endl;
    }
}

// Given:

// void main() {
// 		int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n; ++i) {
//             cout<<"*\n";
//         }
//         cout<<endl;
//     }
// }


// Solution

// void main(){
//     int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n; ++j) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
