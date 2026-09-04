class Solution {
public:
    bool cansplit(vector<int> &nums,int maxvalue,int k){
        int a=1,sum=0;

        for(auto it:nums){
            sum+=it;
            if(sum>maxvalue){
                a++;
                sum=it;
            }
            if(a>k){
                return false;
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int s=0,e=0,sum=0,mid,res=0;

        for(auto it:nums){
            s=max(it,s);
            sum+=it;
        }

        e=sum;
        while(s<=e){
            mid=s+(e-s)/2;
            if(cansplit(nums,mid,k)==true){
                res=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return res;
    }
};