class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int maxi=0,j=0,ans=0;

        for(int i=0;i<s.length();i++){
            mp[s[i]]++;

            maxi=max(maxi,mp[s[i]]);

            while((i-j+1)-maxi>k){
                mp[s[j]]--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};