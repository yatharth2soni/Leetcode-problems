class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        int wincount=0;

        vector<unordered_map<int,int>>v(n);
        vector<bool>winplayer(n,false);
        for(auto it:pick){
            int player=it[0];
            int color=it[1];

            if(winplayer[player]){
                continue;
            }

            v[player][color]++;

            if(v[player][color]>player){
                wincount++;
                winplayer[player]=true;
            }
        }
        return wincount;
    }
};