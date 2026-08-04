class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi=0,mini=INT_MAX;

        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
            mini=min(nums[i],mini);
        }   

        map<int,bool>mp;
        for(int i=mini;i<=maxi;i++){
            mp[i]=false;
        }

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=true;
        }

        vector<int>v;
        for(int i=mini;i<=maxi;i++){
            if(!mp[i]){
                v.push_back(i);
            }
        }
        return v;
    }
};