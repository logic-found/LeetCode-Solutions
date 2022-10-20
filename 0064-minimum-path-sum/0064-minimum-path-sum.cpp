class Solution {
public:
    int recur(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(i<0 || j<0) return 300;
        if(i==0 && j==0) return dp[i][j]=grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        
        int temp=grid[i][j]+min(recur(i-1,j,grid,dp),recur(i,j-1,grid,dp));
        return dp[i][j]=temp;
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return recur(m-1,n-1,grid,dp);
    }
};