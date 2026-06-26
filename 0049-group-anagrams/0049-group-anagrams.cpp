class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>s;
        
        unordered_map<string,vector<string>>mp;

        for(int i=0;i<strs.size();i++){
            string t=strs[i];
            sort(t.begin(),t.end());
            mp[t].push_back(strs[i]);
        }

        for(auto it:mp){
            s.push_back(it.second);
        }
        return s;
    }
};