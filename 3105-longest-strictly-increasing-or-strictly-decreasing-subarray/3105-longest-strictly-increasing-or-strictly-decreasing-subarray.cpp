class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();

        int maxsub1=1;
        int m=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                m++;
                maxsub1=max(maxsub1,m);
            }
            else{
                m=1;
            }
        }

        int maxsub2=1;
        int p=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                p++;
                maxsub2=max(maxsub2,p);
            }
            else{
                p=1;
            }
        }

        return max(maxsub1,maxsub2);
    }
};