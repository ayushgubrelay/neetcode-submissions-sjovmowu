 class Solution {
public:
    string decodeString(string s) {
        stack<pair<int,string>>st;
        string currString = "";
        int currNum = 0;
        for(char ch : s){
            if(isdigit(ch)){
                currNum = currNum*10+(ch-'0');
            }else if(ch == '['){
                st.push({currNum,currString});
                currString = "";
                currNum = 0;
            }else if(ch == ']'){
                auto top = st.top();
                st.pop();
                int f = top.first;
                string s = top.second;
                string temp = "";
                for(int i = 0; i < f; i++){
                    temp += currString;
                }
                currString = s + temp;

            }else{
                currString += ch;
            }
        }
        return currString;
    }
};