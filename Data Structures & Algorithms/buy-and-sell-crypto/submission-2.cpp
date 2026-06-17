class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
        int profit = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(prices[i] < prices[j]){
                    profit = max(prices[j] - prices[i],profit);
                }
            } 
        }
        return profit;
        // int minimum = INT_MAX;
        // int maximum = 0;
        // for(int i = 0; i < n-1; i++){
        //     if(prices[i] < prices[i+1]){
        //         minimum = min(minimum,prices[i]);
        //         maximum = max(maximum,prices[i+1]);
        //     }
        // }
        // if(minimum == INT_MAX){
        //     return 0;
        // }
        // return maximum - minimum;
        
    }
};
