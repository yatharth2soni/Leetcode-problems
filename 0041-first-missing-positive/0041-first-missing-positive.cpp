class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        //optimize solution//

        int n=nums.size();
        bool contains1=false;

        for(int i=0;i<n;i++){
            if(nums[i]==1){
                contains1=true;
            }

            if(nums[i]<=0||nums[i]>n){//[1,n]->inme check karenge//
                nums[i]=1;
            }
        }

        if(!contains1){
            return 1;
        }

        for(int i=0;i<n;i++){
            int num=abs(nums[i]);
            int index=num-1;

            if(nums[index]<0){
                continue;
            }
            nums[index]=nums[index]*(-1);
        }

        for(int i=0;i<n;i++){
            if(nums[i]>0){
                return i+1;
            }
        }
        return n+1;
    }
};