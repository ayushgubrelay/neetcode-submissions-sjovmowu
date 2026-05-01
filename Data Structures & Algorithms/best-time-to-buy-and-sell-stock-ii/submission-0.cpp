class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        // unordered_map<int,int>mp;
        // for(int i = 0; i < n; i++){
        //     mp[i] = prices[i];
        // }

        int  profit = 0;
        for(int i = 0; i < n-1; i++){
            if(prices[i] < prices[i+1]){
                profit += prices[i+1] - prices[i]; 
            }
        }
        return profit;

        
        
    }
};