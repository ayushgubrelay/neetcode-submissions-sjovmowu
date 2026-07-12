class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
       for(int i = 0; i < asteroids.size(); i++){
            bool alive = true;
            while(!st.empty() && st.top() > 0 && asteroids[i] < 0){
                if(abs(st.top()) > abs(asteroids[i])){
                    alive = false;
                    break;
                }else if(abs(st.top()) == abs(asteroids[i])){
                    alive = false;
                    st.pop();
                    break;
                }else{
                    st.pop();
                }
            }
            if(alive){
                st.push(asteroids[i]);
            }
       }
       vector<int>ans;
       while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};