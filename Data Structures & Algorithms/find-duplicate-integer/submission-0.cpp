class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // brute force
        unordered_map<int,int>map;
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }

        for(int i = 0; i < nums.size(); i++){
            if(map[nums[i]] > 1){
                return nums[i];
            }
        }
        return -1;

        
    }
};
