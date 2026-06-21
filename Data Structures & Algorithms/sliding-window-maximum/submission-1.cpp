class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int left = 0;
        vector<int>ans;
         int mc = INT_MIN;
        for(int right = 0; right < nums.size(); right++){
            mc = max(mc,nums[right]);
            if(right - left + 1>= k){
                ans.push_back(mc);
                left++;
                right = right-(k-1);
                mc = INT_MIN;
            }
             


        }
        return ans;
        
    }
};
