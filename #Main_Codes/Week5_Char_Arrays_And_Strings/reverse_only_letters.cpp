#include<iostream>
using namespace std;
class Solution {
public:
    // OR WE CAN MAKE OTHER IS ALPHA FUNCTION TO CHECK WEATHER A CHARACTOR IS ALPHABET OR NOT
    string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(((s[j]>='a' && s[j]<='z') || (s[j]>='A' && s[j]<='Z')) && ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')))
            // OR
            // if( ((s[i]>=97 && s[i]<=122) || (s[i]>=65 && s[i]<=90)) && ((s[j]>=97 && s[j]<=122) || (s[j]>=65 && s[j]<=90)))  
            // OR
            // if(isalpha(s[i]) && isalpha(s[j]))
            {
                    swap(s[i],s[j]);
                    i++;
                    j--; 
            }
            else if(((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))){
            // else if(isalpha(s[i])){
                // else if((s[i]>=97 && s[i]<=122) || (s[i]>=65 && s[i]<=90)){
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
    string t = sol.reverseOnlyLetters("Test1ng-Leet=code-Q!");
    cout<<t<<endl;
    return 0;
}