class Solution {
public:
    int recur(int i,int j,int& m,int& n,vector<vector<int>>& mat,vector<vector<int>>& dp){
        if(i<0 || j<0 || i>=m || j>=n) return 100000;
        if(i==m-1) return dp[i][j]=mat[i][j];
        
        if(dp[i][j]!=-1) return dp[i][j];

        return dp[i][j]=mat[i][j]+min(recur(i+1,j,m,n,mat,dp),
                            min(recur(i+1,j-1,m,n,mat,dp),recur(i+1,j+1,m,n,mat,dp)));
    }
    int minFallingPathSum(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size(),ans=INT_MAX;
        vector<vector<int>> dp(m,vector<int>(n,-1));
        
        for(int i=0;i<n;++i){
            ans=min(ans,recur(0,i,m,n,mat,dp));
        }
        
        return ans;
    }
};