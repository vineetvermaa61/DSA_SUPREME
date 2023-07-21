#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        vector<string> temp;
        string str = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] == ' '){
                if(str.size()>0){
                    temp.push_back(str);
                }
                str = "";
            }
            else{
                str += s[i];
            }
        }
        if(str.size()>0){
            temp.push_back(str);
        }
        string ans = "";
        for(int i=temp.size()-1; i>=0; i--){
            ans += temp[i];
            if(i != 0){
                ans += " ";
            }
        }
        return ans;
    }
};
    // for (int i = 0; i < tmp.size(); i++)
    // {
    //     cout<<tmp[i]  <<i  <<endl;
    // }
int main(){
    // string s = "the sky is blue";
    string s = " hello world ";
    Solution sol;
    string y = sol.reverseWords(s);
    cout<<s<<endl;
    cout<<y<<endl;
    return 0;
}