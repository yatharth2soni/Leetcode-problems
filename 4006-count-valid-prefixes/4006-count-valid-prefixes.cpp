class Solution {
public:
    int countValidPrefixes(string s) {
        int count=0;
        int count1=0;

        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                count1++;
            }
            else{
                count++;
            }
            if(abs(count-count1)<=1){
                ans++;
            }
        }
        return ans;   
    }
};