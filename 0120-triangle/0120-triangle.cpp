class Solution {
public:
    // space optimised
    int minimumTotal(vector<vector<int>>& tri) {
      int m=tri.size();  
      vector<int> dp(m+1);
        
      for(int i=m-1;i>=0;--i){
          vector<int> temp(i+1);
          for(int j=0;j<=i;++j){
            temp[j]=tri[i][j]+min(dp[j],dp[j+1]);
          }
          dp=temp;
      }
        return dp[0]; 
    }
};