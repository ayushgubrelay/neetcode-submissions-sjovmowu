class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
        int minimum = INT_MAX;
        int maxprofit = 0;
        for(int i = 0; i < n; i++){
            minimum = min(minimum,prices[i]);
            int profit = prices[i] - minimum;
            maxprofit = max(maxprofit,profit);
        }
        return maxprofit;
        
        // Brute force 
        // int n = prices.size();
        // int profit = 0;
        // for(int i = 0; i < n; i++){
        //     for(int j = i+1; j < n; j++){
        //         if(prices[i] < prices[j]){
        //             profit = max(prices[j] - prices[i],profit);
        //         }
        //     } 
        // }
        // return profit;
         
    }
};
