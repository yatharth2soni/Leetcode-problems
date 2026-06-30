class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>freq(3,0);
        int substring=0;

        int left=0,right=0;

        while(right<s.length()){
            ++freq[s[right]-'a'];
            
            while(freq[0]>0 && freq[1]>0 && freq[2]>0){
                substring+=s.length()-right;

                --freq[s[left]-'a'];
                left++;
            }
            right++;
        }
        return substring;
    }
};