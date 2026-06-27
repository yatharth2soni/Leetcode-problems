class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int length=0;
        map<long long,int>mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto it:mp){
            int count=0;
            long long x=it.first;
            while(mp.find(x)!=mp.end() && mp[x]){
                if(x==1){
                    count+=mp[1];
                }
                else if(mp[x]>=2){
                    count+=2;
                }
                else if(mp[x]==1){
                    count+=1;
                    break;
                }
                mp[x]=0;

                if(x>1e6){
                    break;
                }
                x=x*x;
            }
            length=max(length,count-(count%2==0));
        }
        return length;
    }
};