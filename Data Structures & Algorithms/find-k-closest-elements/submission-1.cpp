class Solution {
   public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        // vector<pair<int, int>> closest;

        // for (int num : arr) {
        //     closest.push_back({abs(num - x), num});
        // }

        // sort(closest.begin(), closest.end());

        // vector<int> ans;

        // for (int i = 0; i < k; i++) {
        //     ans.push_back(closest[i].second);
        // }

        // sort(ans.begin(), ans.end());

        // return ans;


        priority_queue<pair<int,int>,vector<pair<int,int>>>pq;
        vector<int>ans;
        for(int i = 0; i < arr.size(); i++){
            pq.push({abs(x-arr[i]),arr[i]});
            if(pq.size() > k){
                pq.pop();
            }
        }

        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
};