#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void maxProfitFinder(vector<int> &prices, int i, int &maxProfit, int &minPrice)
    {
        // base case
        if (i >= prices.size())
        {
            return;
        }
        // 1 case solve kar do
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        int todaysProfit = prices[i] - minPrice;
        if (todaysProfit > maxProfit)
        {
            maxProfit = todaysProfit;
        }
        // baaki recursion sambhal lega
        maxProfitFinder(prices, i + 1, maxProfit, minPrice);
    }
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = INT_MIN;
        int minPrice = INT_MAX;
        maxProfitFinder(prices, 0, maxProfit, minPrice);
        return maxProfit;
    }
};
int main()
{

    return 0;
}