#include<iostream>
using namespace std;
class Solution {
public:
    bool isVowel(char ch){

        // if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' ||ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        //     return true;
        // }
        // return false;
        // OR
        ch = tolower(ch);
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';

    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(isVowel(s[i]) && isVowel(s[j]))
            {
                    swap(s[i],s[j]);
                    i++;
                    j--; 
            }
                else if(isVowel(s[i])){
                j--;
            }
            else{
                i++;
            }
        }
        return s;
    }
};
int main(){
    Solution sol;
    // string t = sol.reverseVowels("hello");
    string t = sol.reverseVowels("leetcode");
    cout<<t<<endl;
    return 0;
    return 0;
}