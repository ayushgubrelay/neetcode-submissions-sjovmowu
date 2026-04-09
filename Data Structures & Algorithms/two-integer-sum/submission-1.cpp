class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>ans;
        unordered_map<int,vector<int>>map(n);
        for(int i = 0; i < n; i++){
            map[nums[i]].push_back(i);
        }

         

        sort(nums.begin(),nums.end());
        int i = 0;
        int j = n-1;
        while(i < j){
            int sum = nums[i]+nums[j];
            if(sum == target){
                break;
            }
            else if(sum > target){
                j--;
            }else{
                i++;
            }
        }

         

        int x = map[nums[i]].front();
        int y = map[nums[j]].back();

        
        ans.push_back(x);
        ans.push_back(y);
        sort(ans.begin(),ans.end());
        return ans;

        
    }
};
