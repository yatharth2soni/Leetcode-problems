class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int n=min(word1.length(),word2.length());
        int k=max(word1.length(),word2.length());
        int i=0;
        while(i<n){
            s+=word1[i];
            s+=word2[i];
            i++;
        }

        if(k==word1.length()){
            for(int j=i;j<k;j++){
                s+=word1[j];
            }
        }

        if(k==word2.length()){
            for(int j=i;j<k;j++){
                s+=word2[j];
            }
        }
        return s;
    }
};