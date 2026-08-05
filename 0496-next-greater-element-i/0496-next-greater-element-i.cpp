class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();

        vector<int>v;
        unordered_map<int,int>mp;
        
        stack<int>s;
        for(int i=0;i<m;i++){
            while(!s.empty() && s.top()<nums2[i]){
                mp[s.top()]=nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }

        for(int i=0;i<n;i++){
            if(mp.find(nums1[i])!=mp.end()){
                v.push_back(mp[nums1[i]]);
            }
            else{
                v.push_back(-1);
            }
        }
        return v;
    }
};