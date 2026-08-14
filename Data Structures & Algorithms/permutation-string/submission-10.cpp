class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()){
            return false;
        }
        sort(s1.begin(),s1.end());
        int length = s1.length();
        for(int i = 0; i <= s2.length()-length; i++){
            string substr = s2.substr(i,length);
            sort(substr.begin(),substr.end());
            if(s1 == substr){
                return true;
            }
        }
        return false;

        
    }
};
