class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>p;
        int n=nums.size();
        int product=1;
        int product2=1;

        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
        }

        if(count>1){
            vector<int>pp(n,0);
            return pp;
        }

        for(int i=0;i<nums.size();i++){
            product*=nums[i];
            if(nums[i]!=0){
                product2*=nums[i];
            }
        }

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                p.push_back(product2);
            }
            else{
                int j=nums[i];
                int k=product/j;
                p.push_back(k);
            }
        }
        return p;
    }
};