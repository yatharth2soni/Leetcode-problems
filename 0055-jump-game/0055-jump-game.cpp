class Solution {
public:
    bool canJump(vector<int>& nums) {
        // if(nums[nums.size()-1]==0){
        //     return true;
        // }
        int jump=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=jump){
                jump=nums[i];
            }
            else{
                jump--;
            }

            if(jump==0 && i!=nums.size()-1){
                return false;
            }
        }
        return true;
    }
};