class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>>v;
        vector<int>a;

        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto it:mp){
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end(),[&](pair<int,int>a,pair<int,int>b){
            return a.second>b.second;
        });
        int i=0;
        while(k!=0){
            a.push_back(v[i].first);
            k--;
            i++;
        }
        return a;
    }
};