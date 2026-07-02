class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans1=0;
        int ans2=0;

        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            ans1^=nums[i];
        }

        for(int i=0;i<=n;i++){
            ans2^=i;
        }
        return ans1^ans2;
    }
};