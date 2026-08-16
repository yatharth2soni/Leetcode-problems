class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                mp[nums[i]]++;
            }
        }

        int ele=INT_MAX,freq=INT_MIN;
        for(auto it:mp){
            freq=max(freq,it.second);
        }

        for(auto it:mp){
            if(freq==it.second){
                ele=min(ele,it.first);
            }
        }

        if(mp.size()==0){
            return -1;
        }
        return ele;
    }
};