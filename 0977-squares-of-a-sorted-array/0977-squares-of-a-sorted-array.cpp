class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res(nums.size());
        for(int i=0;i<nums.size();i++){
            res[i]=pow(nums[i],2);
        }
        sort(res.begin(),res.end());
        return res;
    }
};