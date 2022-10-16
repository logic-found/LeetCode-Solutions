class Solution {
public:
    
    int recur(int i,int prev,int& m,int& n,vector<vector<int>>& mat,vector<vector<int>>& dp){
        if(i>=m) return 0;
        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
        
        int temp=INT_MAX;
        for(int j=0;j<n;++j){
            if(j==prev) continue;
            temp=min(temp,mat[i][j]+recur(i+1,j,m,n,mat,dp));
        }
        return dp[i][prev+1]=temp;
    }
    int minFallingPathSum(vector<vector<int>>& mat) {
        int m=mat.size(),n=m;
        vector<vector<int>> dp(m,vector<int>(n+1,-1));
        
        int ans=recur(0,-1,m,n,mat,dp);
       
        return ans;
    }
};