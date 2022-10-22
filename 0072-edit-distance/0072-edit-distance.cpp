class Solution {
public:
    //space optimised
    int minDistance(string s1, string s2) {
        int n1=s1.size(),n2=s2.size();
        vector<int> dp(n2+1);
       
        for(int j=0;j<=n2;++j){   // i<0 =j
            dp[j]=j;
        }
        
        for(int i=1;i<=n1;++i){
            vector<int> temp(n2+1);
            temp[0]=i;
            for(int j=1;j<=n2;++j){
                if(s1[i-1]==s2[j-1]) temp[j]=dp[j-1];
                else{
                   temp[j]=1+min(temp[j-1],min(dp[j-1],dp[j]));//dp[i][j-1], dp[i-1][j-1], dp[i-1][j]
                }
            }
            dp=temp;
        }
        return dp[n2];
    }
};