class Solution {
public:
    string winningPlayer(int x, int y) {
        int chance=1;
        string s="Alice";
        string t="Bob";
        while(x>0 && y>=4){
            x--;
            y-=4;
            chance++;
        }
        if(chance%2!=0){
            return t;
        }
        return s;
    }
};