#include<iostream>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        // cout<<"n "<<n<<endl;
        // int countS = 0;
        int countW = 0;
        bool space = true;
        for(int i = n-1;i >=0 ; i--){
            if(s[i] == ' '){
            // countS++;
            space = true;
            }
            else
            {
                countW++;
                space = false;
            }
            if(space == true && countW>0 || countW>0 && i == 0){
                return countW;
            }
            // if(countW == n){
            //     return countW;
            // }
        }
        return 0;
    }
};
int main(){
    Solution sol;
    // cout<<sol.lengthOfLastWord("Mi nae hai ");
    cout<<sol.lengthOfLastWord("i");
    // cout<<sol.lengthOfLastWord("   fly me   to   the moon  ");
    return 0;
}