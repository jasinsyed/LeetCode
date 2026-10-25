class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int Maxprofit = 0;
    int bestbuy = prices[0];
    for(int i = 1; i < prices.size(); i++){
        if(prices[i] > bestbuy){
            Maxprofit = max(Maxprofit, prices[i] - bestbuy);
        }
        bestbuy = min(prices[i],bestbuy);
    }
    return Maxprofit;
    }
};