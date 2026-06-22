class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }
        unordered_set<int>st;

        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }

        vector<int>v;
        for(int i:st){
            v.push_back(i);
        }

        sort(v.begin(),v.end());
        int count=1;
        int maxi=1;
        for(int i=0;i<v.size()-1;i++){
            if(v[i+1]==v[i]+1){
                count++;
                maxi=max(maxi,count);
            }
            else{
                count=1;
            }
        }
        return maxi;
    }
};