// // NAVE APPROACH
// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     bool isPrime(int n){
//         for (int i = 2; i < n; i++)
//         {
//             if(n % i == 0){
//                 return false;
//             }
//         }
//         return true;
//     }

//     int countPrimes(int n) {
//         int primeNo = 0;
//         for (int i = 2; i < n; i++)
//         {
//             if(isPrime(i)){
//                 primeNo++;
//             }
//         }
//         return primeNo;
//     }
// };
// int main(){
//     Solution sol;
//     int n; cin>>n;
//     cout<< sol.countPrimes(n) <<endl;
//     return 0;
// }


// // SQRT APPROACH
// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     bool isPrime(int n){
//         for (int i = 2; i <= sqrt(n); i++)
//         {
//             if(n % i == 0){
//                 return false;
//             }
//         }
//         return true;
//     }

//     int countPrimes(int n) {
//         int primeNo = 0;
//         for (int i = 2; i < n; i++)
//         {
//             if(isPrime(i)){
//                 primeNo++;
//             }
//         }
//         return primeNo;
//     }
// };
// int main(){
//     Solution sol;
//     int n; cin>>n;
//     cout<< sol.countPrimes(n) <<endl;
//     return 0;
// }


// // SIEVE OF ERATOSTHENES APPROACH
// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:
//     int countPrimes(int n) {
//         if(n == 0 || n == 1){
//             return 0;
//         }

//         vector<bool> prime(n , true);
//         prime[0] = prime[1] = false;

//         int primeNo = 0;
//         for(int i = 2; i < n; i++){
//             if(prime[i]){
//                 primeNo++;


//                 int j = i * 2;
//                 while(j < n){
//                     prime[j] = false;
//                     j = j + i;
//                 }
//             }
//         }
//         return primeNo;

//     }
// };
// int main(){
//     Solution sol;
//     int n; cin>>n;
//     cout<< sol.countPrimes(n) <<endl;
//     return 0;
// }


// SEGMENTED SIEVE APPROACH
// COUNT PRIMES BETWEEN a and b
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:

    int primeCount(int n){
        vector<bool> prime(n , true);
        prime[0] = prime[1] = false;
        
        int primeNo = 0;
        for(int i = 2; i < n; i++){
            if(prime[i]){
                primeNo++;


                int j = i * 2;
                while(j < n){
                    prime[j] = false;
                    j = j + i;
                }
            }
        }
        return primeNo;
    }

    int countPrimes(int a, int b) {
        if( (b == 0 || b == 1) ){
            return 0;
        }

        int x = primeCount(a);
        int y = primeCount(b);
        return y-x;
    }
};
int main(){
    Solution sol;
    int a; cin>>a;
    int b; cin>>b;
    cout<< sol.countPrimes(a,b) <<endl;
    return 0;
}