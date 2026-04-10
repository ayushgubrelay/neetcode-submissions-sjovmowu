class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>mp;
         
         
        mp[nums[0]] = 0;
        for(int i = 1; i < n; i++){
            int x = target-nums[i];
            if(mp.count(x)){   
                return {mp[x],i};
            }
            mp[nums[i]] = i;
        }
        
    }
};
