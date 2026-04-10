class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n = strs.size();
        sort(strs.begin(),strs.end());
        string x = strs[0];
        string y = strs[n-1];
        string ans = "";
        int length = min(x.length(),y.length());
        

        for(int i = 0; i < length; i++){
            if(x[i] != y[i]){
                return ans;
            }
            ans += x[i];

        }
        return ans;
        
        
    }
};