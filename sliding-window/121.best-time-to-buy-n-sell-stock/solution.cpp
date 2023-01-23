class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices.at(i) < minPrice) minPrice = prices.at(i);
            if (prices.at(i) - minPrice > maxProfit) maxProfit = prices.at(i) - minPrice;
        }
        return maxProfit;
    }
};
