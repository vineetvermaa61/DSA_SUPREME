#include<iostream>
#include<vector>
#include<string.h>
#include<string>
#include<algorithm>
using namespace std;
// ********************************************MOST MOST IMPORTANT********************************************
int expandAroundIndex(string s, int left, int right){
    int count = 0;
    // jab tak match karega tab tak count increment kar do aur i ko peeche aur j ko aage kar do
    while (left >=0 && right <= s.length() && s[left] == s[right])
    {
        count++;
        left--;
        right++;
    }
    return count;
}

class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();
        // center badalta jayega aur center ki different values ke liye odd ans aur even ans check hota rahega
        // odd ans ke liye i aur j ka index same se start honge
        // even ans ke liye i aur j ka index different se start honge
        for (int center = 0; center < n; center++)
        {
            // odd ans
            int oddKaAns = expandAroundIndex(s,center,center);
            count = count + oddKaAns;
            // even ans
            int evenKaAns = expandAroundIndex(s,center,center+1);
            count = count + evenKaAns;
        }
        return count;
    }
};
int main(){
    Solution sol;
    // cout<<sol.countSubstrings("abc");
    cout<<sol.countSubstrings("aaa");
    return 0;
}