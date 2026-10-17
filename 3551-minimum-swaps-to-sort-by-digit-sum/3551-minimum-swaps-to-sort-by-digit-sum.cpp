class Solution {
public:
    int minSwaps(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }

        vector<pair<int,int>>vp;

        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }

        for(int i=0;i<nums.size();i++){
            int k=nums[i];
            int sum=0;
            while(k>0){
                sum+=k%10;
                k/=10;
            }
            vp.push_back({nums[i],sum});
        }

        sort(vp.begin(),vp.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            if(a.second!=b.second){
                return a.second<b.second;
            }
            return a.first<b.first;
        });
        
        int swaps=0;
        for(int i=0;i<nums.size();i++){
            int k=nums[i];

            int b=vp[i].first;

            if(k==b){
                continue;
            }

            int index=mp[b];
            nums[i]=b;
            nums[index]=k;

            mp[b]=i;
            mp[k]=index;
            swaps++;
        }
        return swaps;
    }
};