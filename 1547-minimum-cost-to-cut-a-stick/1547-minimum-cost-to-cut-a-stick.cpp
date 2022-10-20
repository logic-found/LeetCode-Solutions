class Solution {
public:
    // length=nums[j+1]-nums[i-1]
    int recur(int i,int j,vector<int>& cuts,vector<vector<int>>& dp){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        
        int cost=INT_MAX;
        for(int k=i;k<=j;++k){
            int left=(i-1>=0)? cuts[i-1]:0;
            int right=cuts[j+1];
            int x=(right-left)+recur(i,k-1,cuts,dp)+recur(k+1,j,cuts,dp);
            cost=min(cost,x);
        }
        return dp[i][j]=cost;
    }
    int minCost(int n, vector<int>& cuts) {
        int size=cuts.size();
        cuts.push_back(n);
        sort(cuts.begin(),cuts.end());
        vector<vector<int>> dp(size,vector<int>(size,-1));
        return recur(0,size-1,cuts,dp);  
    }
};