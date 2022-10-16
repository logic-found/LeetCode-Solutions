class Solution {
public:

    int minFallingPathSum(vector<vector<int>>& mat) {
       int m=mat.size(),n=m;
        vector<vector<int>> dp(m+1,vector<int>(n+1));
        
        for(int j=n-1;j>=0;--j){    //initialization
            dp[m][j]=0;
        }
        for(int i=m-2;i>=-1;--i){
            for(int prev=0;prev<=n;++prev){
                int temp=INT_MAX;
                
                for(int j=0;j<n;++j){
                    if(j==prev) continue;
                    temp=min(temp,mat[i+1][j]+dp[i+2][j]);
                }
                dp[i+1][prev]=temp;
            }
        }
        // for(auto i:dp){
        //     for(auto j:i) cout<<j<<" ";
        //     cout<<endl;
        // }
        return dp[-1+1][n];
    }
};