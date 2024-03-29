class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowestPrice = prices[0];
        int maxProfit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < lowestPrice) {
                lowestPrice = prices[i];
            } else {
                int profit = prices[i] - lowestPrice;
                maxProfit = max(maxProfit, profit);
            }
        }
        return maxProfit;
    }
};