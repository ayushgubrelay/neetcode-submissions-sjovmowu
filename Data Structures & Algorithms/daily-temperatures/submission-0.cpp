class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans;
        int n = temperatures.size(); 
        for(int i = 0; i < n; i++){
            int count = 0;
            bool isfound = false;
            for(int j = i+1; j < n; j++){
                if(temperatures[i] < temperatures[j]){
                    count++;
                    isfound = true;
                    break;
                }
                count++;
            }
            
            if(isfound){
                ans.push_back(count);
            }else{
                ans.push_back(0);
            }

        }
        return ans;
        
    }
};
