class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end(),greater<int>());
        long long sum=0;
        long long j=min(mul,k);

        if(mul==k){
            int l=0;
            while(mul!=0){
                sum+=1LL*nums[l]*mul;
                mul--;
                k--;
                l++;
            }
        }

        if(j==mul){
            int i=0;
            while(mul!=0){
                sum+=1LL*nums[i]*mul;
                mul--;
                k--;
                i++;
            }

            while(k!=0){
                sum+=nums[i];
                k--;
                i++;
            }
        }

        

        if(j==k){
            int e=0;
            while(k!=0){
                sum+=1LL*nums[e]*mul;
                mul--;
                k--;
                e++;
            }
        }
        return sum;
    }
};