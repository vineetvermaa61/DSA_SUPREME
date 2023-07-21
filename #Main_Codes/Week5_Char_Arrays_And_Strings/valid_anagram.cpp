#include<iostream>
#include<algorithm>
using namespace std;
    class Solution {
public:
    
    bool isAnagram(string s, string t) {

        // // Method-1 | Sorting : O(nlogn)
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if(s==t){
        //     return true;
        // }
        // return false;
        // or
        // return (s==t);

        // Method-2 | Counting : O(n+m)
        int freqTable[256] = {0};
        for(int i=0; i<s.size(); i++){
            freqTable[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            freqTable[t[i]]--;
        }
        for(int i=0; i<256; i++){
            if(freqTable[i] != 0){
                return false;
            }
        }
        return true;

    }
};
int main(){
    Solution sol;
    // if(sol.isAnagram("anagram", "nagaram")){
    if(sol.isAnagram("rat", "car")){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}

// bool isAnagram(string s, string t) {
//         if(s.length() != t.length()){
//             return false;
//         }
//         int sumS = 0;
//         for(int i=0; i<s.length(); i++){
//             sumS += s[i] + 0;
//         }
//         int sumT = 0;
//         for(int i=0; i<t.length(); i++){
//             sumT += t[i] + 0;
//         }
//         if(sumS == sumT){
//             return true;
//         }
//         return false;
//     }