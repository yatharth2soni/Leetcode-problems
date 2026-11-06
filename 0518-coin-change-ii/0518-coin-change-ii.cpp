class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        
        vector<vector<unsigned int>>dp(n+1,vector<unsigned int>(amount+1,0));

        int g=0;
        for(int i=0;i<n;i++){
            g=__gcd(g,coins[i]);
        }

        if(amount%g!=0){
            return 0;
        }
        
        for(int i=0;i<n+1;i++){
            dp[i][0]=1;
        }
        
        for(int i=1;i<n+1;i++){
            for(long long j=1;j<amount+1;j++){
                if(coins[i-1]<=j){
                    dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        return (int)dp[n][amount];
    }
};