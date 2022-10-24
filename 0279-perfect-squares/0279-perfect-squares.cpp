class Solution {
public:
    int recur(int num,int& end,int target,vector<int>& dp){
        if(target==0) return 0;
        if(num>end) return 100000;
        if(dp[target]!=-1) return dp[target];
        int pick=100000,not_pick=100000;
        
       if(num*num<=target){
           pick=1+recur(1,end,target-num*num,dp);
       }
        not_pick=recur(num+1,end,target,dp);
        return dp[target]=min(pick,not_pick);
    }
    int numSquares(int target) {
       int end=sqrt(target);
        vector<int> dp(target+1,-1);
       return recur(1,end,target,dp); 
    }
};