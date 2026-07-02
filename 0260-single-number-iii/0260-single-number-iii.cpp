class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>v;
        long long Xor=0,xor1=0,xor2=0;

        for(int i=0;i<nums.size();i++){
            Xor^=nums[i];
        }

        Xor=Xor&(~(Xor-1));

        for(int i=0;i<nums.size();i++){
            if(Xor&nums[i]){
                xor1=xor1^nums[i];
            }
            else{
                xor2=xor2^nums[i];
            }
        }
        v.push_back(xor1);
        v.push_back(xor2);
        return v;
    }
};