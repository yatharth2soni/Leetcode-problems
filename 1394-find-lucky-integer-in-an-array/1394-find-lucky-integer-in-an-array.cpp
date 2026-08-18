class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;

        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int maxi=0;
        for(auto it:mp){
            if(it.first==it.second){
                maxi=max(maxi,it.first);
            }
        }
        if(maxi==0){
            return -1;
        }
        return maxi;
    }
};