class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
      int m=tri.size();  
      vector<vector<int>> dp(m+1,vector<int>(m+1,0));
        
      for(int i=m-1;i>=0;--i){
          for(int j=0;j<=i;++j){
            dp[i][j]=tri[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
          }
      }
        return dp[0][0]; 
    }
};