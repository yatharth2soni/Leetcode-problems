class Solution {
public:
    bool check(int a,int b,int c,int d,vector<vector<char>>& board){
        unordered_set<char>t;

        for(int i=a;i<=c;i++){
            for(int j=b;j<=d;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                if(t.find(board[i][j])!=t.end()){
                    return false;
                }
                t.insert(board[i][j]);
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
       //row check//
       for(int i=0;i<9;i++){
            unordered_set<char>st;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                st.insert(board[i][j]);
            }
       }

       //column check//
       for(int i=0;i<9;i++){
            unordered_set<char>s;
            for(int j=0;j<9;j++){
                if(board[j][i]=='.'){
                    continue;
                }
                if(s.find(board[j][i])!=s.end()){
                    return false;
                }
                s.insert(board[j][i]);
            }
       }

       //box check//
       int endrow,endcolumn;
       for(int startrow=0;startrow<9;startrow+=3){
            endrow=startrow+2;
            for(int startcolumn=0;startcolumn<9;startcolumn+=3){
                endcolumn=startcolumn+2;
                if(!check(startrow,startcolumn,endrow,endcolumn,board)){
                    return false;
                }
            }
       }
       return true;
    }
};