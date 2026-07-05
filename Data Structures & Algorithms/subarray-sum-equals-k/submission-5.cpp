class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int count = 0;
        // for(int i = 0; i < nums.size(); i++){
        //     for(int j = 0; j < nums.size(); j++){
        //         int sum = 0;
        //         for(int k = i; k <= j; k++){
        //             sum += nums[k];
        //         }
        //         if(sum == k){
        //             count++;
        //         }
        //     }
        // }
        // return count;


        unordered_map<int,int>mp;
        mp[0] = 1;
        int prefix = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            prefix += nums[i];
            if(mp.count(prefix-k)){
                count += mp[prefix-k];
            }
            mp[prefix]++;
        }
        return count;
        
    }
};