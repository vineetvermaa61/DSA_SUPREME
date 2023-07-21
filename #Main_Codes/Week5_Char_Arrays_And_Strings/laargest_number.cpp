#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    static bool comparator_custom(string a, string b){
        // max string return karega
        string t1 = a+b;
        string t2 = b+a;
        return t1 > t2;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> snums;
        for(auto it : nums){
            // int ko string mein covert karke snums mein push karega
            snums.push_back(to_string(it));
        }
    
        sort(snums.begin(), snums.end(), comparator_custom);

        if(snums[0] == "0") return "0"; // kynki agar pehla hi max charactor hai aur wo hi 0 hai to poori string 0 hogi

        string ans = "";
        for(auto it : snums){
            ans += it;
        }

        return ans;
    }
};
int main(){
    vector<int> nums = {10,2,3,9,7};
    Solution sol;
    string x = sol.largestNumber(nums);
    cout<<x<<endl;
    return 0;
}


// class Solution {
// public:
//     static bool comparator_custom(char a, char b){
//         return a > b;
//     }
//     string largestNumber(vector<int>& nums) {
//         string ans="";
//         for(int i=0; i<nums.size(); i++){
//             while (nums[i])
//             {
//                 ans += (nums[i]%10+'0');
//                 nums[i] /= 10;
//             }  
//         }
//         // sort(ans.begin(), ans.end());
//         sort(ans.begin(), ans.end(), comparator_custom);
//         // reverse(ans.begin(), ans.end());

//         return ans;
//     }
// };