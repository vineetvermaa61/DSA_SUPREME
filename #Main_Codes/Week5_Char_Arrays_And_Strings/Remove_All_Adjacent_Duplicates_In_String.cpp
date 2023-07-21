#include<iostream>
using namespace std;
// T.C. -> O(n)      S.C. -> O(n) // as we used extra space
class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        for (int i = 0; i < s.length(); i++)
        {
            if(ans.length() > 0){

            if (s[i] == ans[ans.length() - 1])
            {
                ans.push_back(s[i]);
                ans.pop_back();

            }else{
                ans.push_back(s[i]);
            }
            }
            else{
                ans.push_back(s[i]);
                
            }
            
        }
        return ans;
    }
};
int main(){
    Solution sol;
    cout<<sol.removeDuplicates("aazbbby")<<endl;
    cout<<sol.removeDuplicates("aabbcb")<<endl;

    return 0;
}


// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     string removeDuplicates(string s) {
//         for (int j = 0; j < s.length()*2; j++)
//         {
//             for (int i = 0; i < s.length(); i++)
//         {
//             if(i+1 >=1 && s[i] == s[i+1]){
//                 s.erase(i,2);
//             }
//         }
//         }
//         return s;
//     }
// };
// int main(){
//     Solution sol;
//     cout<<sol.removeDuplicates("abbac")<<endl;
//     return 0;
// }