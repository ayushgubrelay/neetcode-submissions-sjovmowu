class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;

        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }

        int largest = 0;
        for(int i = 0; i < n; i++){
            largest = max(largest, nums[i]);
        }

        for(int i = 1; i <= largest; i++){
            if(!mp.count(i)){
                return i;
            }
        }

        return largest + 1;
    }
};