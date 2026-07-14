 class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();
        vector<int>prev(n);
        vector<int>next(n);
        stack<int>nl;
        stack<int>p;
        for(int i = n-1; i >= 0; i--){
            while(!nl.empty() && heights[i] <= heights[nl.top()]){
                nl.pop();
            }
            if(nl.empty()){
                next[i] = n;
            }else{
                next[i] = nl.top();
            }
            nl.push(i);
        }

        for(int i = 0;  i < n; i++){
            while(!p.empty() && heights[i] <= heights[p.top()]){
                p.pop();
            }
            if(p.empty()){
                prev[i] = -1;
            }else{
                prev[i] = p.top();
            }
            p.push(i);
        }


        int ma = 0;
        for(int i = 0; i < n; i++){
            int h = heights[i];
            int w = next[i]-prev[i]-1;
            int ca = h*w;
            ma = max(ma,ca);
        }
        return ma;
    }
};
