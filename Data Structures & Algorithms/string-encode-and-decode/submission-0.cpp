class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(string s : strs){
            ans += to_string(s.length()) + "#" + s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> ans;

        while(i < s.size()){
            string c = "";

            // read length
            while(s[i] != '#'){
                c += s[i];
                i++;
            }

            int count = stoi(c);
            i++;  // move past '#'

            string str = "";

            // read 'count' characters
            for(int j = 0; j < count; j++){
                str += s[i + j];
            }

            ans.push_back(str);

            i += count;  // move to next block
        }

        return ans;
    }
};