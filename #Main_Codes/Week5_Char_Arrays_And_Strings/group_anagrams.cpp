#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<array>
using namespace std;
class Solution {
public:

    std::array<int,256> hash(string str){ // METHOD-2:Function
        std::array<int,256> hashMap = {0};
        for(int i=0; i<str.size(); i++){
            hashMap[str[i]]++;
        }
        return hashMap;
    } 

    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // // METHOD-1:
        // map<string, vector<string>> mp;

        // for(auto str : strs){ // inserting all string corresponding to that's sorter version/anagram
        //     string s = str;
        //     sort(s.begin(), s.end());
        //     mp[s].push_back(str);
        // }

        // METHOD-2:
        map< std::array<int,256>, vector<string>> mp;

        for(auto str : strs){
            mp[hash(str)].push_back(str);
        } 

        vector<vector<string>> ans;
        for(auto it = mp.begin(); it != mp.end(); it++){
            ans.push_back(it -> second);
        }

        return ans;
    }
};
int main(){
    Solution sol;
    vector<string> s = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> x = sol.groupAnagrams(s);

    return 0;
}