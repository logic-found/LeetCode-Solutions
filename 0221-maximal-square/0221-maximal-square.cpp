class Solution {
public:
    int maximalSquare(vector<vector<char>>& mat) {
        int m=mat.size(),n=mat[0].size(),area=0;
        vector<vector<int>> dp(m,vector<int>(n));
    
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(mat[i][j]=='1'){               // fill 1 area square
                    dp[i][j]=1;
                    area=max(area,dp[i][j]*dp[i][j]);
                }
                if(i>=1 && j>=1){
                    if(mat[i][j]=='1' && mat[i-1][j-1]=='1' && mat[i-1][j]=='1' && 
                                                                        mat[i][j-1]=='1'){
                        dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                        area=max(area,dp[i][j]*dp[i][j]);
                    }
                }
                
            }
        }
        
        return area;
    }
};