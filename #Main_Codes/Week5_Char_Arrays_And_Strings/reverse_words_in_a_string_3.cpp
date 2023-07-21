#include<iostream>
using namespace std;
class Solution {
public:
    void revWord(string& s, int size, int start){
        int i = start;
        int j = size + start - 1;
        while(i <= j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    string reverseWords(string s) {
        int count=1;
        int start=0;
        int i=0;
        while(i < s.size()){
            i++;
            count++;
            if(s[i] == ' ' || i == s.size()){
                revWord(s, count-1, start);
                start = i+1;
                count=0; // space ki wajah se
            }
        }
        return s;
    }
};
int main(){
    Solution sol;
    string s = sol.reverseWords("Good Boy");
    cout<<s<<endl;
    return 0;
}