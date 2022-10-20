class Solution {
public:
    int recur(int i,int j,int& m,int& n,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(i>=m || j>=n) return 300;
        if(i==m-1 && j==n-1) return dp[i][j]=grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        
        int temp=grid[i][j]+min(recur(i+1,j,m,n,grid,dp),recur(i,j+1,m,n,grid,dp));
        return dp[i][j]=temp;
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return recur(0,0,m,n,grid,dp);
    }
};