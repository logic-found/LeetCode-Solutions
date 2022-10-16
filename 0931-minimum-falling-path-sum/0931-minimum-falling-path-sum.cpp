class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size(),ans=INT_MAX;
        vector<vector<int>> dp(m,vector<int>(n));
        for(int j=0;j<n;++j){
            dp[m-1][j]=mat[m-1][j];    //initialization
        }
        
        for(int i=m-2;i>=0;--i){
            for(int j=0;j<n;++j){
                int x=(j-1>=0)? dp[i+1][j-1]:100000;
                int y=(j+1<n)? dp[i+1][j+1]:100000;
                dp[i][j]=mat[i][j]+min(dp[i+1][j],min(x,y));
            }  
        }
        for(int j=0;j<n;++j){
            ans=min(ans,dp[0][j]);
        }
        
        return ans;
    }
};