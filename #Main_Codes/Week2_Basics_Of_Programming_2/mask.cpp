#include<iostream>
using namespace std;
// **************IMPORTANT*****************
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n){
            if(n&1){
                ++count;
            }
            n = n>>1;
        }
        return count;
    }
};
int main(){
    Solution Sol;
    cout<<Sol.hammingWeight(00000000000000000000000000001011);
    return 0;
}