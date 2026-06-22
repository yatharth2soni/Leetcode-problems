class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>p(n);

        p[0]=1;
        for(int i=1;i<n;i++){
            p[i]=p[i-1]*nums[i-1];
        }

        int right=1;
        for(int i=n-1;i>=0;i--){
            p[i]=right*p[i];
            right*=nums[i];
        }
        return p;
    }
};