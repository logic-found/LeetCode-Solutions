class Solution {
public:

    int coinChange(vector<int>& coins, int target) {
        if(target==0) return 0;                            
        int N=coins.size();
	
        vector<vector<int>> dp(N+1,vector<int> (target+1,-1));
        for(int i=0;i<=target;++i) dp[0][i]=100000;
        for(int i=0;i<=N;++i) dp[i][0]=0;           // memoization base case-> initialization
        
        for(int n=1;n<=N;++n){
            for(int t=1;t<=target;++t){
                if(coins[n-1]<=t)
                    dp[n][t]=min(1+dp[n][t-coins[n-1]],dp[n-1][t]);
                else 
                    dp[n][t]=dp[n-1][t];
                }
        }
        if(dp[N][target]>=100000) return -1;
        return dp[N][target];
    }
};