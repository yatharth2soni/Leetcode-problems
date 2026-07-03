class Solution {
public:
    int hammingDistance(int x, int y) {
        int no_positions=0;
        while(x!=0 || y!=0){
            int k=x&1;
            int t=y&1;

            if(k!=t){
                no_positions++;
            }
            x>>=1;
            y>>=1;
        }
        return no_positions;
    }
};