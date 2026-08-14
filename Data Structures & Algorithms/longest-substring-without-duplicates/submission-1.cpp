class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int ml = 0;
        string ans = "";
        for(int j = 0; j < s.length(); j++){
            while(ans.find(s[j]) != string :: npos){
                ans.erase(ans.begin());
                i++;
            }
            ans += s[j];
            ml = max(ml,j-i+1);
        }
        return ml;
        
    }
};
