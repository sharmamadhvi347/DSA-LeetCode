class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        
        for (int i = 1; i < prices.size(); i++) {
            // If the price today is higher than yesterday, 
            // "buy" yesterday and "sell" today to grab the profit.
            if (prices[i] > prices[i - 1]) {
                max_profit += prices[i] - prices[i - 1];
            }
        }
        
        return max_profit;
    }
};