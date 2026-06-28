class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int maxi=0;
        int n=nums.size();
        vector<int>right(n);

        right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],nums[i]);
        }

        int l=0,r=0;

        while(r<n){
            while(l<r && nums[l]>right[r]){
                l++;
            }
            maxi=max(maxi,r-l);
            r++;
        }
        return maxi;
    }
};