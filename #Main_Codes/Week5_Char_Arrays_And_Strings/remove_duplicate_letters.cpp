#include<iostream>
using namespace std;
class Solution {
public:
    string removeDuplicateLetters(string s) {

        // bool hash[26] = {false};
        // string ans="";
        // for(int i=0; i<s.size(); i++){
        //     if(hash[s[i] - 'a'] == false){
        //         hash[s[i] - 'a'] = true;
        //         ans += s[i];
        //     }
        // }
        // return ans;

        string ans = "";
        int index = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int j;
            for ( j= 0; j < i; j++) // i=0 , j=0 hone par loop nahin chalega par bahar wala loop i==j to chalega 
            {
                if(s[i] == s[j]){ // jab do element barabar hon tab loop se bahar
                    break;
                }
            }
            if(i == j){ // agar wo do element ka i,j same hai to ans mein include karo
                ans += s[i];
            }
        }
        return ans;
    }
};
int main(){
    Solution sol;
    string s = sol.removeDuplicateLetters("bacabc");
    cout<<s<<endl;
    return 0;
}