class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        for (int i = 0; i < s1.length(); i++) {
            freq1[s1[i] - 'a']++;
        }

        for (int i = 0; i < m; i++) {
            freq2[s2[i] - 'a']++;
            if (i >= n) {
                freq2[s2[i-n] - 'a']--;
            }

            if(i >= n-1){
                if(freq1 == freq2){
                    return true;
                }
            }
        }
        return false;
    }
};
