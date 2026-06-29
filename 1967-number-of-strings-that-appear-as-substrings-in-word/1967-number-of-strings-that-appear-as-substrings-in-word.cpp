class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(int i=0;i<patterns.size();i++){
            string t=patterns[i];
            if(word.find(t)!=std::string::npos){
                count++;
            }
        }
        return count;
    }
};