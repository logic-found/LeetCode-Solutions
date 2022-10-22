class Solution {
public:
    //1 based index
    int minDistance(string s1, string s2) {
        int n1=s1.size(),n2=s2.size();
        vector<vector<int>> dp(n1+1,vector<int>(n2+1));
        
        for(int i=0;i<=n1;++i){   // base case-> j<0 =i   
            dp[i][0]=i;
        }
        for(int j=0;j<=n2;++j){   // i<0 =j
            dp[0][j]=j;
        }
        for(int i=1;i<=n1;++i){
            for(int j=1;j<=n2;++j){
                if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1];
                else{
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
                }
            }
        }
        return dp[n1][n2];
    }
};