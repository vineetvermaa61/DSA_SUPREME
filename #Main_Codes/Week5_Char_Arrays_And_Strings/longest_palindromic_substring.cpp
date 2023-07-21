#include<iostream>
#include<string>
using namespace std;
class Solution {
public:

    // METHOD-1:FUNCTION
    // string expandAroundIndex(string& s, int left, int right){
    //     vector<string> ans;
    //     while(left>=0 && right<s.size() && s[left] == s[right]){
    //         ans.push_back(s.substr(left, right-left+1));
    //         left--;
    //         right++;
    //     }

    //     string max = "";
    //     for(int i=0; i<ans.size(); i++){
    //         if(ans[i].size() > max.size()){
    //             max = ans[i];
    //         }
    //     }
    //     return max;
    // }

    //METHOD-2: FUNCTION
    bool isPalindrome(string& s, int left, int right){
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        
        return true;
    }

    string longestPalindrome(string s) {

    // METHOD:2
    string ans="";
    if(s.size() == 1){
        return s;
    }
    for(int i=0; i<s.size(); i++){
        for(int j=i; j<s.size(); j++){
            if(isPalindrome(s,i,j)){
                string t = (s.substr(i, j-i+1));
                ans = ( t.size() > ans.size() ) ? t : ans;
            }
        }
    }

    // METHOD-1:
    //     vector<string> maxi;
    //     for(int center=0; center<s.size(); center++){
    //         string evenKaAns = expandAroundIndex(s, center, center);
    //         maxi.push_back(evenKaAns);
    //         string oddKaAns = expandAroundIndex(s, center, center+1);
    //         maxi.push_back(oddKaAns);
    //     }

    //     string ans = "";
    //     for(int i=0; i<maxi.size(); i++){
    //         if(maxi[i].size() > ans.size()){
    //             ans = maxi[i];
    //         }
    //     }

        return ans;
    }
};
int main(){
    
    return 0;
}