#include<iostream>
using namespace std;
class Solution {
public:
    string reorganizeString(string s) {
        string ans = "";

        int hash[26] = {0}; // calculating frequencies of each charactor
        for(int i=0; i<s.size(); i++){
            hash[s[i] - 'a']++; // to restrict range b/w 0-25
        }

        int max_freq = INT_MIN;
        char max_freq_char; // calculating maximum frequency
        for(int i=0; i<26; i++){
            if(hash[i] > max_freq){
                max_freq = hash[i];
                max_freq_char = i + 'a';
            }
        }

        int index=0; // placing highest frquency charactor
        while(max_freq > 0 && index < s.size()){
            s[index] = max_freq_char;
            max_freq--;
            index += 2;
        }

        if(max_freq != 0){ // agar max count wala place nahin ho paya to adjacent ho jayega 
            return "";
        }

        hash[max_freq_char - 'a'] = 0; // maximum count wale ko place kar chuke to 0 mark kar diya baaki sab ki tarah jinki frequency 0 hai

        for(int i=0; i<26; i++){ // placing remaining charactors
            while(hash[i] > 0){
                index = (index >= s.size()) ? 1 : index; // agar index range mein hai to use karo nahin to 1 kar do taaki 1,3,6,...to be filled
                s[index] = i + 'a';
                index += 2;
                hash[i]--;
            }
        }
        return s;
    }
};
int main(){
    Solution sol;
    // string t = sol.reorganizeString("leetcode");
    // string t = sol.reorganizeString("aab");
    string t = sol.reorganizeString("aaab");
    cout<<t<<endl;
    return 0;
}