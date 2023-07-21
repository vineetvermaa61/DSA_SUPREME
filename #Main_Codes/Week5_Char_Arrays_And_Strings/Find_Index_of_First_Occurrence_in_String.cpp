#include<iostream>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        // return haystack.find(needle);
        int n = haystack.size();
        int m = needle.size();
        for(int i=0; i<=n-m; i++){
            for(int j=0; j<m; j++){
                if(needle[j] != haystack[i+j]){
                    break;
                }
                if(j == m-1){
                    return i;
                }
            }
        }
        return -1;
    }
};
int main(){
    Solution sol;
    int x = sol.strStr("bhoosa","sa");
    cout<<x<<endl;
    return 0;
}



// METHOD: TLE
        // return haystack.find(needle);
        // int index=0;
        // int i=0;
        // while(i<haystack.size() && index < needle.size()){
        //     if(haystack[i] == needle[index]){
        //         index++;
        //     }
        //     else{
        //         index = 0;
        //     }
        //     i++;
        // }

        // if(index == needle.size()){
        //     return i - index;
        // }
        // return -1;