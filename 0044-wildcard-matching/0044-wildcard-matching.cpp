class Solution {
public:
    // 1 based indexing
    // tabulation 
    
    bool isMatch(string s1, string s2) {
        int n1=s1.size(),n2=s2.size();
        vector<vector<int>> dp(n1+1,vector<int>(n2+1));
        dp[0][0]=1;
        for(int c=1;c<=n2 && s2[c-1]=='*';++c){
            dp[0][c]=1;
        }
        for(int i=1;i<=n1;++i){
            for(int j=1;j<=n2;++j){
                if(s1[i-1]==s2[j-1] || s2[j-1]=='?'){
                    dp[i][j]=dp[i-1][j-1];
                }
                else if(s2[j-1]=='*'){
                    dp[i][j]=dp[i][j-1] || dp[i-1][j];
                }
                else dp[i][j]=0;
            }
        }
        return dp[n1][n2];
    }
};