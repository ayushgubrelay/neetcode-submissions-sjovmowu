class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == nums[i+1]){
                continue;
            }else{
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
        
    }
};