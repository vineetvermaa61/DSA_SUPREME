#include<iostream>
using namespace std;
// ********IMPORTANT***********
    class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int m = n;
        int mask = 0; // i.e 0000...000
        while (m!=0)
        {
            mask = (mask << 1) | 1;  // mask ko left shift karte jayenge aur 1 ke sath 0 ka OR lete jayenge
            m = m >> 1;
        }
        int res = ~n & mask; // 101 , ~101 = 1111..11010
        // cout<<"~n "<< (~n) <<endl;
        return res;   
    }
};
int main(){
    Solution sol;
    cout<<sol.bitwiseComplement(5);
    return 0;
}