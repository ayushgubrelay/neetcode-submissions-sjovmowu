class Solution {
public:
    void rotate(vector<int>& nums, int m) {
        int n = nums.size();
        if(m == n){
            return;
        }
        int k = m % n; 
        vector<int>ans;
        for(int i = n-k; i < n; i++){
            ans.push_back(nums[i]);
        }
        for(int j = 0; j < n-k; j++){
            ans.push_back(nums[j]);
        }

        for(int x = 0; x < n; x++){
            nums[x] = ans[x];
        }
        
    }
};