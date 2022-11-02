class Solution {
public:
    // 1 based indexing
    // tabulation
    bool isMatch(string s1, string s2) {
        int n1=s1.size(),n2=s2.size();
        vector<vector<int>> dp(n1+1,vector<int>(n2+1));
         
        for(int i=1;i<=n2 && s2[i-1]=='*';++i){
            dp[0][i]=1;
        }
        dp[0][0]=1;
        for(int idx1=1;idx1<=n1;++idx1){
            for(int idx2=1;idx2<=n2;++idx2){
                if(s1[idx1-1]==s2[idx2-1]){
                    dp[idx1][idx2]=dp[idx1-1][idx2-1];
                }
                else if(s2[idx2-1]=='?'){
                    dp[idx1][idx2]=dp[idx1-1][idx2-1];
                }
                else if(s2[idx2-1]=='*'){
                    for(int i=0;idx1-i>=0;++i){
                        bool a=dp[idx1-i][idx2-1];
                        if(a){
                            dp[idx1][idx2]=1;
                            break;
                        }
                    }
                }
                else dp[idx1][idx2]=0;
            }
        }
        
        return dp[n1][n2];
    }
};