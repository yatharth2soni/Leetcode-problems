class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
       int n=nums.size();
       vector<int>freq(2*n+1);
       freq[n]=1;

       long long ans=0,prevprefix=0;

       for(int i:nums){
        if(i==target){
            prevprefix+=freq[n++];
        }
        else{
            prevprefix-=freq[--n];
        }
        ++freq[n];
        ans+=prevprefix;
       }
       return ans;
    }
};