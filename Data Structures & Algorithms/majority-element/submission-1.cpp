class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n = nums.size();
        // unordered_map<int,int>mp;
        // for(int i = 0; i < n; i++){
        //     mp[nums[i]]++;

        // }
        // int ans = 0;
        // for(auto &it : mp){
        //     if(it.second > n/2){
        //         ans = it.first;
        //     }
        // }
        // return ans;

        int candidate = 0;
        int count = 0;
        for(int num : nums){
            if(count == 0){
                candidate = num;
            }
            if(num == candidate){
                count++;
            }else{
                count--;
            }
        }
        return candidate;

        
    }
};