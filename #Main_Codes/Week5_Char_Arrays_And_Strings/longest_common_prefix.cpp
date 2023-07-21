#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i=0;

        while(true){
            int current_charactor = 0;

            for(auto str : strs){
                if(i >= str.size()){
                    // out of bound
                    current_charactor = 0;
                    break;
                }
                if(current_charactor == 0){
                    // just started
                    current_charactor = str[i];
                }
                if(current_charactor != str[i]){
                    current_charactor = 0;
                    break;
                }
            }

            if(current_charactor == 0){
                break;
            }
            ans.push_back(current_charactor);
            i++;
        }

        return ans;
    }
};
int main(){
    Solution sol;
    vector<string> strs = {"flower","flow","flight"};
    // vector<string> strs = {"dog","racecar","car"};
    // vector<string> strs = {"codehelp","codenothelp"};
    // vector<string> strs = {"ran","rat"};
    // vector<string> strs = {"fir","fire","firm","first"};
    string ans = sol.longestCommonPrefix(strs);
    cout<<ans<<endl;
    return 0;
}