#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    string verifyGCD(string target, string s1, string s2){
        string str1 = s1;
        string str2 = s2;
        int size1 = str1.size()/target.size();
        int size2 = str2.size()/target.size();
        // cout<<"size1"<<size1<<endl;
        // cout<<"size2"<<size2<<endl;
        string c1 ="";
        string c2 = "";
        for (int i = 0; i < size1; i++)
        {
            c1 = c1 + target;
        }
        // cout<<"c1"<<c1<<endl;
        for (int i = 0; i < size2; i++)
        {
            c2 = c2 + target;
        }
        // cout<<"c2"<<c2<<endl;
        return (c1 == str1 && c2 == str2) ? target : "";
    }

    string checkKaroGCD(string s1, string s2){
        string str1 = s1;
        string str2 = s2;
        while( str1 != str2){
            int location = str1.find(str2);
            if(location == string :: npos){
                break;
            }
            str1.erase(location, str2.size());
        }
        return str1 == str2 ? str2 : "" ;
    }

    string gcdOfStrings(string s1, string s2) {
        string str1 = s1;
        string str2 = s2;
        vector<string> ans;
        while(str2 != ""){
            if(checkKaroGCD(str1,str2) == ""){
                str2.pop_back();
            }
            else{
                ans.push_back(checkKaroGCD(str1,str2));
                str2.pop_back();
            }
        }
        // for (int i = 0; i < ans.size(); i++)
        // {
        //     // cout<< "ans: "<< ans[i] <<" ";
        // }
        
        string ans2 = "";
        for (int i = 0; i < ans.size(); i++)
        {
            // cout<< "ans: "<< ans[i] <<" "<< "str1: "<< s1 <<" "<< "str2: "<< s2 <<" "<<endl;
            string x = verifyGCD(ans[i], s1, s2);
                // cout<<"x: " <<x<<endl;
            if(x.size() >= ans2.size()){
                ans2 = x;
            }
        }
        
        return ans2;
    }
};
int main(){
    // string str1 = "ABCABC";
    // string str2 = "ABC";
    // string str1 = "leet";
    // string str2 = "code";
    string str1 = "ABABABAB";
    string str2 = "ABAB";
    
    // cout<<str1<<endl;
    // // cout<<  << endl;

    Solution sol;
    cout<<sol.gcdOfStrings(str1, str2);
    return 0;
}