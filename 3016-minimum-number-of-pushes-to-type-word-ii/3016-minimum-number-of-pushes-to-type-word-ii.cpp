class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);

        for(int i=0;i<word.length();i++){
            freq[word[i]-'a']++;
        }

        sort(freq.begin(),freq.end(),greater<int>());
        int push=0;
        for(int i=0;i<26;i++){
            push+=freq[i]*(i/8+1);
        }

        return push;
    }
};