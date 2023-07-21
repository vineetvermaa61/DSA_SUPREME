#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int compress(vector<char>& s) {
        int count=1, index=0; // index -> of overwrited array
        char prev = s[0];
        for(int i=1; i<s.size(); i++){
            if(s[i] == prev){
                count++;
            }
            else{
                s[index++] = prev;
                if(count>1){
                    int start=index;
                    while(count){
                        s[index++] = count%10+'0'; // int to char conversion
                        count /= 10; 
                    }
                    reverse(s.begin()+start, s.begin()+index);
                }
                prev = s[i]; // current element ko previous bana diya
                count=1;
            }
        }

        s[index++] = prev;
        if(count>1){
            int start=index;
            while(count){
                s[index++] = count%10+'0'; // int to char conversion
                count /= 10; 
            }
        reverse(s.begin()+start, s.begin()+index);
        }
    return index;
    }
};
int main(){
    vector<char> input = {"a","a","b","b","c","c","c"};
    Solution sol;
    int x = sol.compress(input);
    cout<<x<<endl;
    return 0;
}