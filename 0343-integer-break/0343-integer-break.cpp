class Solution {
public:
    int recur(int target,vector<int>& dp){
        if(target==0) return dp[target]=1;
        if(dp[target]!=-1) return dp[target];
        
        int sum=1;
        for(int i=1;i<=target;++i){
            sum=max(sum,i*recur(target-i,dp));
        }
        return dp[target]=sum;
    }
    int integerBreak(int target) {
       vector<int> dp(target+1,-1);
        int ans=0;
        
        for(int i=1;i<target;++i){
            int temp=i*recur(target-i,dp);
            ans=max(ans,temp);
        }
        return ans;
    }
};