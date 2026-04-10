class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(int i = 0; i < strs.size(); i++){
            string s = strs[i];
            string key = strs[i];
            sort(key.begin(),key.end());
            if(mp.count(key)){
                mp[key].push_back(s);
            }else{
                mp[key].push_back(s);
            }

        }

        for(auto it : mp){
            auto x = it.second;
            ans.push_back(x);

        }
        return ans;

        
    }
};
