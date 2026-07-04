class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score=0;
        int count=0;

        sort(tokens.begin(),tokens.end());

        int l=0,r=tokens.size()-1;
        int maxi=0;
        while(l<=r){
            if(power>=tokens[l]){
                power-=tokens[l];
                score+=1;
                l++;
                maxi=max(maxi,score);
            }
            else if(score>0){
                power+=tokens[r];
                score-=1;
                r--;
            }
            else{
                break;
            }
        }
        return maxi;
    }
};