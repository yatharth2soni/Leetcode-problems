class Solution {
public:
    int maxDistance(string moves) {
        int countU=0;
        int countD=0;
        int countL=0;
        int countR=0;
        int count=0;

        int x=0;
        int y=0;

        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U'){
                countU++;
            }
            else if(moves[i]=='D'){
                countD--;
            }
            else if(moves[i]=='L'){
                countL--;
            }
            else if(moves[i]=='R'){
                countR++;
            }
            else{
                count++;//for _//
            }
        }

        x=countR+countL;
        y=countU+countD;

        return abs(x)+abs(y)+count;
    }
};