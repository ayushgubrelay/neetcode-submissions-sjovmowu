class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int>s(nums.begin(),nums.end());
        int maxlength = 0;
        for(int num : nums){
            if(s.find(num-1) == s.end()){
                int currNum = num;
                int length = 1;
                while(s.find(currNum+1) != s.end()){
                    currNum++;
                    length++;
                }
                maxlength = max(maxlength,length);
            }

             
        }
        return maxlength;
    }
};
