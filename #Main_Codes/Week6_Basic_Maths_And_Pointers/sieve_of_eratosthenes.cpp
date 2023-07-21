// #include<iostream>
// #include<cmath>
// #include<vector>
// using namespace std;
// vector<bool> Sieve(int n){

//     vector<bool> sieve(n+1,true);
//     sieve[0] = sieve[1] = false;

//     // OPTIMIZATION2 : OUTER LOOP : i*i <= n;
//     for (int i = 2; i*i <= n; i++)
//     {
//         if(sieve[i] == true){
//             // int j = i*2;
//             // OPTIMIZATION1 : INNER LOOP : j = i*i;
//             // first unmarked number would be i*i , as others have been marked from 2 to (i-1)
//             int j = i*i;
//             while(j <= n){
//                 sieve[j] = false;
//                 j = j + i;
//             }
//         }
//     }
//     return sieve;
// }

// vector<bool> segSieve(int L, int R){
//     vector<bool> sieve = Sieve(sqrt(R));
//     vector<int> basePrimes;
//     for (int i = 0; i < sieve.size(); i++)
//     {
//         if(sieve[i]){
//             basePrimes.push_back(i);
//         }
//     }

//     vector<bool> segSieve(R-L+1, true);
//         if(L==1 || L==0){
//             segSieve[L] = false;
//         }
//         for(auto prime: basePrimes){
//             int first_mul = (L/prime)*prime;
//             if(first_mul < L){
//                 first_mul += prime;
//             }
//             int j = max(first_mul, prime*prime);
//             while(j <= R){
//                 segSieve[j-L] = false;
//                 j += prime;
//             }
//         }
//     return segSieve;
// }

// int main(){
//     // vector<bool> sieve = Sieve(25);

//     // for (int i = 0; i <= 25; i++){
//     //     if(sieve[i] == true){
//     //          cout << i << " ";
//     //     }
//     // }
//     // cout<<endl;

//     int L = 110;
//     int R = 130;
//     vector<bool> ss = segSieve(L, R);
//     for (int i = 0; i < ss.size(); i++)
//     {
//         if(ss[i]){
//             cout << i + L << " ";
//         }
//     }
    
//     return 0;
// }

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
vector<bool> Sieve(int n){

    vector<bool> sieve(n+1,true);
    sieve[0] = sieve[1] = false;

    // OPTIMIZATION2 : OUTER LOOP : i*i <= n;
    for (int i = 2; i*i <= n; i++)
    {
        if(sieve[i] == true){
            // int j = i*2;
            // OPTIMIZATION1 : INNER LOOP : j = i*i;
            // first unmarked number would be i*i , as others have been marked from 2 to (i-1)
            int j = i*i;
            while(j <= n){
                sieve[j] = false;
                j = j + i;
            }
        }
    }
    return sieve;
}

vector<bool> segSieve(long long L, long long R){
    vector<bool> sieve = Sieve(sqrt(R));
    vector<long long> basePrimes;
    for (int i = 0; i < sieve.size(); i++)
    {
        if(sieve[i]){
            basePrimes.push_back(i);
        }
    }

    vector<bool> segSieve(R-L+1, true);
        if(L==1 || L==0){
            segSieve[L] = false;
        }
        for(auto prime: basePrimes){
            long long first_mul = (L/prime)*prime;
            if(first_mul < L){
                first_mul += prime;
            }
            long long j = max(first_mul, prime*prime);
            while(j <= R){
                segSieve[j-L] = false;
                j += prime;
            }
        }
    return segSieve;
}

    
    long long primeProduct(long long L, long long R){
        vector<bool> ss = segSieve(L, R);
        long long ans = 1;
        for (long long i = 0; i < ss.size(); i++)
        {
            if(ss[i]){
                ans = (i + L) *ans;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}
// } Driver Code Ends