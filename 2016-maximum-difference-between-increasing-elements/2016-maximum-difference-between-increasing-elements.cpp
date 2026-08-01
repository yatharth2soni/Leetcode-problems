class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxdiff=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]<nums[j]){
                    maxdiff=max(maxdiff,nums[j]-nums[i]);
                }
            }
        }
        if(maxdiff==0){
            return -1;
        }
        return maxdiff;
    }
};