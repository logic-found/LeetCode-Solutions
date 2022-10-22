class Solution {
public:
    int recur(int i,int j,string& s,vector<vector<int>>& dp){
        if(i>j) return 0;
        else if(i==j) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s[i]==s[j]){
            return dp[i][j]=2+recur(i+1,j-1,s,dp);
        }
        else{
            return dp[i][j]=max(recur(i+1,j,s,dp),recur(i,j-1,s,dp));
        }
    }
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return recur(0,n-1,s,dp);
    }
};