class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlength=INT_MAX,l=0;
        int sum=0;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            while(sum>=target){
                minlength=min(r-l+1,minlength);
                sum-=nums[l];
                l++;
            }
        }

        if(minlength==INT_MAX){
            return 0;
        }
        return minlength;
    }
};