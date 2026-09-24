class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int bestbuy = prices[0];
        int maxpro = 0;

        for(int i = 0; i < prices.size(); i++) {

            if(prices[i] < bestbuy) {
                bestbuy = prices[i];
            }

            int profit = prices[i] - bestbuy;

            if(profit > maxpro) {
                maxpro = profit;
            }
        }

        return maxpro;
    }
};