class Solution {
public:
    unordered_map<string,int> mp;
    bool recur(int i,int n,string& s,vector<int>& dp){
        if(i>=n) return true;
        if(dp[i]!=-1) return dp[i];
        string x="";
        for(int j=i;j<n;++j){
            x+=s[j];
            if(mp[x]==1){
                if(recur(j+1,n,s,dp)) return dp[i]= true;
            }
        }
        return dp[i]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
       int n=s.size();
        for(auto i:wordDict){
            mp[i]=1;
        }
        vector<int> dp(n,-1);
        return recur(0,n,s,dp);
    }
};