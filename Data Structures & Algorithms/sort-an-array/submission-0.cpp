class Solution {
public:
    void merge(vector<int>&arr,int l, int m, int r){
        vector<int>temp;
        int i = l;
        int j = m+1;
        while(i <= m && j <= r){
            if(arr[i] < arr[j]){
                temp.push_back(arr[i]);
                i++;
            }else{
                temp.push_back(arr[j]);
                j++;
            }
        }

        while(i <= m){
            temp.push_back(arr[i]);
            i++;
        }
         while(j <= r){
            temp.push_back(arr[j]);
            j++;
        }

        for(int k = 0; k < temp.size(); k++){
            arr[l+k] = temp[k];
        }
    }
    void mergesort(vector<int>&nums,int l,int r){
        if(l >= r){
            return;
        }
        int m = (l+r)/2;
        mergesort(nums,l,m);
        mergesort(nums,m+1,r);
        merge(nums,l,m,r);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};