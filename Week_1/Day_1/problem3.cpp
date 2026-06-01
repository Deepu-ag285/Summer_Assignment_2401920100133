class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int maxprofit = 0;
        int buystock = prices[0];
        for (int i=1;i<n;i++){
            int currentprofit = prices[i]- buystock;
            if(currentprofit >maxprofit)  maxprofit = currentprofit;
            if(prices[i]<buystock) buystock = prices[i];
            }
       return maxprofit;
        }
       

    
};
