#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int sign=1, num=0, i=0;
        while(s[i] == ' '){ // ignore space
            i++;
        }

        if( i<s.size() && (s[i] == '+' || s[i] == '-') ){
            sign = s[i]=='+' ? 1 : -1; // take sign
            i++;
        }

        while(i<s.size() && isdigit(s[i])){ // making integer
        // *****EDGE CASE****
            if(num > INT_MAX/10 || (num == INT_MAX/10 && s[i]>'7')){
                return sign == -1 ? INT_MIN : INT_MAX;
            }
            num = num*10 + (s[i]-'0');
            i++;
        }

        return num*sign;
    }
};
int main(){
    Solution sol;
    int x = sol.myAtoi("   -42");
    cout<<x<<endl;
    return 0;
}