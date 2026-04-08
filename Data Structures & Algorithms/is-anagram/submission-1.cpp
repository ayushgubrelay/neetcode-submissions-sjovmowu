class Solution {
public:
    bool isAnagram(string s, string t) {
        // first method
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s == t){
        //     return true;
        // }
        // return false;
        int l1 = s.length();
        int l2 = t.length();
        if(l1 != l2){
            return false;
        }


        int freq1[26] = {0};
        int freq2[26] = {0};
        for(int i = 0; i < l1; i++){
            freq1[s[i] - 'a']++; 
        }
        for(int i = 0; i < l2; i++){
            freq2[t[i] - 'a']++; 
        }

         

        for(int i = 0; i < 26; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;





        
    }
};
