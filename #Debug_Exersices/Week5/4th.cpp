// Debug the code. It tries to check if given string a Palindrome or not.
#include<iostream>
using namespace std;
string isPalindrome(string S)
{
	int N = S.length();
    for (int i = 0; i <= (N/2)-1; i++) {
		    if (S[i] != S[N-i-1]) {
            return "No";
        }
    }
    return "Yes";
}
int main(){
    string ans = isPalindrome("nein");
    cout<<ans<<endl;
    return 0;
}

// GIVEN:
// string isPalindrome(string S)
// {
// 		int N = S.length();
//     for (int i = 0; i < (N/2)-1; i++) {
// 		    if (S[i] != S[N-i]) {
//             return "No";
//         }
//     }
//     return "Yes";
// }

// SOLUTION:
// string isPalindrome(string S)
// {
//     int N = S.length();
//     for (int i = 0; i < (N/2); i++) {  // Fix
// 	    if (S[i] != S[N-i-1]) { // Fix
//             	return "No";
//         }
//     }
//     return "Yes";
// }