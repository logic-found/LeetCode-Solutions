class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int m=mat.size(),n=m;
        vector<vector<int>> dp(m+1,vector<int>(n+1));
        
        for(int j=0;j<=n;++j) dp[m][j]=0;   //initialization
        
        for(int i=m-1;i>=0;--i){
            for(int prev=0;prev<=n;++prev){  
                int temp=INT_MAX;
                
                for(int j=0;j<n;++j){
                    if(prev==j) continue;
                    temp=min(temp,mat[i][j]+dp[i+1][j]);
                }
                dp[i][prev]=temp;
            }
        }
        return dp[0][n];    // storing th min of each row at nth column
    }
};