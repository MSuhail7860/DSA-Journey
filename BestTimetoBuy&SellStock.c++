// Leetcode Problem 121: Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n == 0) return 0; 

        int min_price = prices[0];
        int max_profit = 0;

        for(int i = 1; i < n; i++) {
            min_price = min(min_price, prices[i]);       
            int profit = prices[i] - min_price;         
            max_profit = max(max_profit, profit);       
        }
        return max_profit;
    }
};