class Solution {
public:
    // 1 based indexing
    // tabulation 
    // 1-d
    bool isMatch(string s1, string s2) {
        int n1=s1.size(),n2=s2.size();
        vector<int> dp(n2+1);
        dp[0]=1;
        for(int c=1;c<=n2 && s2[c-1]=='*';++c){
            dp[c]=1;
        }
        for(int i=1;i<=n1;++i){
            vector<int> temp(n2+1);
            for(int j=1;j<=n2;++j){
                if(s1[i-1]==s2[j-1] || s2[j-1]=='?'){
                    temp[j]=dp[j-1];
                }
                else if(s2[j-1]=='*'){
                    temp[j]=temp[j-1] || dp[j];
                }
                else temp[j]=0;
            }
            dp=temp;
        }
        return dp[n2];
    }
};