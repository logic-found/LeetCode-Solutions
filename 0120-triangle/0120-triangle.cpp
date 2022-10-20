class Solution {
public:
    int recur(int i,int j,int& m,vector<vector<int>>& tri,vector<vector<int>>& dp){
        if(i>=m) return 100000;
        if(i==m-1) return dp[i][j]=tri[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        
        int temp=tri[i][j]+min(recur(i+1,j,m,tri,dp),recur(i+1,j+1,m,tri,dp));
        return dp[i][j]=temp;
        
    }
    int minimumTotal(vector<vector<int>>& tri) {
      int m=tri.size();  
      vector<vector<int>> dp(m,vector<int>(m,-1));
      return recur(0,0,m,tri,dp);
    }
};