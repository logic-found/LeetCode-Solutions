class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m=mat.size(),n=mat[0].size();
        vector<vector<int>> dp(m,vector<int>(n));
        vector<vector<int>> ans(m,vector<int>(n));
        dp[0][0]=mat[0][0];
        
        for(int i=1,j=1;i<m || j<n;++i, ++j){
            if(i<m) dp[i][0]=dp[i-1][0]+mat[i][0];
            if(j<n) dp[0][j]=dp[0][j-1]+mat[0][j];
        }
        for(int i=1;i<m;++i){
            for(int j=1;j<n;++j){
                dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+mat[i][j];
            }
        }

        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                int x1=(i-k>=0)? i-k:0;
                int y1=(j-k>=0)? j-k:0;
                int x2=(i+k<m)? i+k:m-1;
                int y2=(j+k<n)? j+k:n-1;
                
                int a=(x1-1>=0)? dp[x1-1][y2]:0;
                int b=(y1-1>=0)? dp[x2][y1-1]:0;
                int k=(x1-1>=0 && y1-1>=0)? dp[x1-1][y1-1]:0;
                //cout<<i<<" "<<j<<"--"<<dp[x2][y2]<<"->"<<a<<" "<<b<<" "<<k<<endl;
                ans[i][j]=dp[x2][y2]-a-b+k;
            }
        }
        return ans;
    }
};