class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // brute force 
        // for(int i = 0; i < nums.size(); i++){
        //     for(int j = i+1; j < nums.size(); j++){
        //         if(nums[i] == nums[j]){
        //             if(abs(i-j) <= k){
        //                 return true;
        //             }
        //         }
        //     }
        // }
        // return false;
        // time complexity = o(n^2);
        // space complexity = o(1);


        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i++){
            if(mp.count(nums[i])){
                if(abs(i-mp[nums[i]]) <= k){
                    return true;
                }
            }
            mp[nums[i]] = i;
        }
        return false;





        
    }
};