class Solution {
public:
    void sortColors(vector<int>& nums) {
        //we want to modify nums only not use another vector or cout//
        int m=nums.size();
        int count=0;
        int count1=0;
        int count2=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }

            if(nums[i]==1){
                count1++;
            }
            
            if(nums[i]==2){
                count2++;
            }
        }
        nums.clear();

        for(int i=0;i<m;i++){
            if(count!=0){
                nums.push_back(0);
                count--;
            }

            if(count==0 && count1!=0){
                nums.push_back(1);
                count1--;
            }

            if(count==0 && count1==0 && count2!=0){
                nums.push_back(2);
                count2--;
            }
        }
    }
};