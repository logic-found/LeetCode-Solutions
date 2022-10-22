class Solution {
public:
    //space optimised
    int longestCommonSubsequence(string s1, string s2) {
        int n1=s1.size(),n2=s2.size();
        vector<int> dp(n2+1,0);
        
        for(int i=1;i<=n1;++i){
            vector<int> temp(n2+1);
            temp[0]=0;
            for(int j= 1;j<=n2;++j){
                if(s1[i-1]==s2[j-1]){
                    temp[j]=1+dp[j-1];
                }
                else{
                    temp[j]=max(dp[j],temp[j-1]);
                }
            }
            dp=temp;
        }
        return dp[n2];
    }
};