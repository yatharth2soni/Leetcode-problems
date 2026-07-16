class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>mx(n),prefixgcd(n);
        int h=nums[0];
        
        mx[0]=h;
        for(int i=1;i<n;i++){
            mx[i]=max(mx[i-1],nums[i]);
        }

        for(int i=0;i<n;i++){
            prefixgcd[i]=__gcd(mx[i],nums[i]);
        }

        sort(prefixgcd.begin(),prefixgcd.end());
        long long sum=0;
        int i=0,j=n-1;
        while(i<j){
            sum+=__gcd(prefixgcd[i],prefixgcd[j]);
            i++;
            j--;
        }
        return sum;
    }
};