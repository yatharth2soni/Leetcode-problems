class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini=INT_MAX;
        int mini2=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                int k=abs(nums[i]);
                mini2=min(mini2,k);
            }
            else{
                mini=min(mini,nums[i]);
            }
        }
        
        if(mini==mini2){
            return mini;
        }
        else if(mini2>mini){
            return mini;
        }
        return (mini2*-1);
    }
};