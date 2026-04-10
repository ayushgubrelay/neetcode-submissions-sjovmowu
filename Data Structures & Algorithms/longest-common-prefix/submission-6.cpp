class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n = strs.size();
        // sort(strs.begin(),strs.end());
        // string x = strs[0];
        // string y = strs[n-1];
        // string ans = "";
        // int length = min(x.length(),y.length());
        

        // for(int i = 0; i < length; i++){
        //     if(x[i] != y[i]){
        //         return ans;
        //     }
        //     ans += x[i];

        // }
        // return ans;

        string ans;
        string x = strs[0];
        int l = INT_MAX;
        for(int i = 0; i < strs.size(); i++){
            int s = strs[i].length();
            l = min(s,l);
        }
        for(int i = 0; i < l; i++){
            for(int j = 1 ; j < n; j++){
                string y = strs[j];
                cout << x[i] << " " << y[i] << endl;
                ;
                if(x[i] != y[i]){
                    return ans;
                }    
            }
            ans += x[i];
        }
        return ans;
        
        
    }
};