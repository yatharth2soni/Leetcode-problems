class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>index;
        for(int i=0;i<words.size();i++){
            string t=words[i];

            for(int j=0;j<t.length();j++){
                if(t[j]==x){
                    index.push_back(i);
                    break;
                }
            }
        }
        return index;
    }
};