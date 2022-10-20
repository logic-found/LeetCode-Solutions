class Solution {
public:
    int recur(int n,vector<int>& dp){
        if(n<0) return 1;
        if(dp[n]!=-1)  return dp[n];
        int num=n-1,temp=0;
        
        for(int i=0;i<=num;++i){
            temp+=recur(i,dp)*recur(num-i,dp);
        }
        return dp[n]=temp;
    }
    int numTrees(int n) {
        if(n==0 || n==1) return n;
       vector<int> dp(n+1,-1);
        dp[0]=dp[1]=1;
        dp[2]=2;
        return recur(n,dp);
    }
};