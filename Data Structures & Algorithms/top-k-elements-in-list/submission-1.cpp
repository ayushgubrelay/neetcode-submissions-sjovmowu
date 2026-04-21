class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<pair<int,int>>ans;
        vector<int>result;
        for(int num : nums){
            mp[num]++;
        }
        for(auto it : mp){
            int key = it.first;
            int value = it.second;
            ans.push_back({value,key});
        }

        sort(ans.begin(),ans.end(),greater<pair<int,int>>());
         
        for(int i = 0; i < k; i++){
            auto pair = ans[i];
            result.push_back(pair.second);
        }
        return result;

        
    }
};
