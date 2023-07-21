#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    string expandAroundIndex(string s, int left, int right){
        vector<string> ans;
        while(left>=0 && right<s.size() && s[left] == s[right]){
            ans.push_back(s.substr(left, right-left+1));
            left--;
            right++;
        }

        string max = "";
        for(int i=0; i<ans.size(); i++){
            if(ans[i].size() > max.size()){
                max = ans[i];
            }
        }
        return max;
    }
    string longestPalindrome(string s) {
        vector<string> maxi;
        for(int center=0; center<s.size(); center++){
            string evenKaAns = expandAroundIndex(s, center, center);
            maxi.push_back(evenKaAns);
            string oddKaAns = expandAroundIndex(s, center, center+1);
            maxi.push_back(oddKaAns);
        }

        string ans = "";
        for(int i=0; i<maxi.size(); i++){
            if(maxi[i].size() > ans.size()){
                ans = maxi[i];
            }
        }
        return ans;
    }
};
int main(){
    Solution sol;
    string s = sol.longestPalindrome("babad");
    cout<<s<<endl;
    return 0;
}