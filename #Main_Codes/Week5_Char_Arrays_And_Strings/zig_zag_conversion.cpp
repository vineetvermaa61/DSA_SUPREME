#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        vector<string> zigzag(numRows);
        int i=0, row=0;
        bool direction = 1;
        while(true){
            if(direction){
                while(row < numRows && i < s.size()){
                    zigzag[row++].push_back(s[i++]);
                }
                row = numRows-2;
            }
            else{
                while(row >= 0 && i < s.size()){
                    zigzag[row--].push_back(s[i++]);
                }
                row = 1;
            }
            direction = !direction;
            if(i >= s.size()){
                break;
            }
        }
        string ans="";
        for(int i=0; i < zigzag.size(); i++){
            ans += zigzag[i];
        }
        return ans;
    }
};
int main(){
    Solution sol;
    string x = sol.convert("PAYPALISHIRING",3);
    cout<<x<<endl;
    return 0;
}