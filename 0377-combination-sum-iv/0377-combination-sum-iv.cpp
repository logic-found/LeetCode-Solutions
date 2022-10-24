class Solution {
public:
    int recur(int i,int& n,int target,vector<int>& nums,vector<vector<int>>& dp){
        if(target==0) return 1;
        if(i>=n) return 0;
        if(dp[i][target]!=-1) return dp[i][target];
        
        int temp=0;
        for(int k=0;k<n;++k){
            if(target-nums[k]>=0){
                temp+=recur(k,n,target-nums[k],nums,dp);
            }
            
        }
        return dp[i][target]=temp;
    }    
    int combinationSum4(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return recur(0,n,target,nums,dp);
    }
};