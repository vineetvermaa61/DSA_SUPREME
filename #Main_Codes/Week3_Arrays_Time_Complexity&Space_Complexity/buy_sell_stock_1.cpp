// 121. Best Time to Buy and Sell Stock
// TLE
// ****************************IMPORTANT********************************
// #include<iostream>
// #include<vector>
// using namespace std;
//     class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int profit = 0;
//         int max = INT_MIN;
//         for (int i = 0; i < prices.size(); i++)
//         {
//             if (prices[i] > max)
//             {
//                 max = prices[i];
//             }
            
//         }
        

//         for (int i = 0; i < prices.size(); i++)
//         {
//             for(int j = i+1; j<prices.size(); j++){
//                 if ((prices[i] < prices[j]) && (prices[j] - prices[i]) > profit)
//             {
//                 profit = (prices[j] - prices[i]);
//                 if (profit == max)
//                 {
//                     // cout<<"Loop Encountred"<<endl;
//                     return profit;
//                 }
                
//             }
//             }
           
//         }
//         if(profit >= 0){
//             return profit;
//         }
//         return 0;
//     }
// };
// int main(){
//     Solution sol;
//     vector<int> arr{7,1,5,3,6,4};
//     // vector<int> arr{0,1,5,3,6,4};
//     // vector<int> arr{7,6,4,3,1};
//     cout<<sol.maxProfit(arr);
//     return 0;
// }

// OPTIMAL CODE:
#include<iostream>
#include<vector>
using namespace std;
    class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int maxProfit = 0;
        for (int i = 0, j = i+1; j < prices.size(); i++, j++)
        {
            if(prices[i] < buy){
                buy = prices[i];
            }

            if(prices[j]- buy > maxProfit){
                maxProfit = prices[j]-buy;
            }
        }
        return maxProfit;
    }
};
int main(){
    Solution sol;
    vector<int> arr{7,1,5,3,6,4};
    // vector<int> arr{0,1,5,3,6,4};
    // vector<int> arr{7,6,4,3,1};
    cout<<sol.maxProfit(arr);
    return 0;
}