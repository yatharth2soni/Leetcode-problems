class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>back(nums.size());
        int mini=INT_MAX,maxi=INT_MIN,score=0;

        for(int i=nums.size()-1;i>=0;i--){
            mini=min(mini,nums[i]);
            back[i]=mini;
        }

        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            score=maxi-back[i];
            if(score<=k){
                return i;
            }
        }
        return -1;
    }
};