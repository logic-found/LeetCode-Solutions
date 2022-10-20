class Solution {
public:
    int numTrees(int n) {
        if(n==0 || n==1) return n;
        vector<int> dp(n+1);
        dp[0]=dp[1]=1;
        dp[2]=2;
        
        for(int i=3;i<=n;++i){
            int num=i-1,temp=0;
            for(int j=0;j<=num;++j){
                temp+=(dp[j]*dp[num-j]);
            }
            dp[i]=temp;
        }
        return dp[n];
    }
};