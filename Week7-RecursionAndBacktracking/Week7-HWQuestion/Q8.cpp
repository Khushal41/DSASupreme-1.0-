// Buy and sell stokes[leetcode]
class Solution
{
public:
    void maxProfitFinder(vector<int> &prices, int i, int &minPrice,
                         int &maxProfit)
    {
        // Base Case
        if (i == prices.size())
            return;
        // 1 case solve
        if (prices[i] < minPrice)
            minPrice = prices[i];
        int todayProfit = prices[i] - minPrice;
        if (todayProfit > maxProfit)
            maxProfit = todayProfit;
        // Recursion sambhal lega
        maxProfitFinder(prices, i + 1, minPrice, maxProfit);
    }
    int maxProfit(vector<int> &prices)
    {
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;
        maxProfitFinder(prices, 0, minPrice, maxProfit);
        return maxProfit;
    }
};