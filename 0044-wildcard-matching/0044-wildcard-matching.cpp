class Solution {
public:
    // 1 based indexing
     bool recur(int idx1,int idx2,string& s1,string& s2,vector<vector<int>>& dp){
    	if(idx1<=0 && idx2<=0) return true;
    	else if(idx2<=0) return false;
        else if(idx1<=0){
            for(int i=idx2;i>0;--i){
                if(s2[i-1]!='*') return false;
            }
            return true;
        }
    	else if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];
    	
         
    	if(idx1>0 && s1[idx1-1]==s2[idx2-1]){
    		return dp[idx1][idx2]=recur(idx1-1,idx2-1,s1,s2,dp);
    	}
    	else if(idx1>0 && s2[idx2-1]=='?'){
    		return dp[idx1][idx2]=recur(idx1-1,idx2-1,s1,s2,dp);
    	}
    	else if(s2[idx2-1]=='*'){
    		if(recur(idx1,idx2-1,s1,s2,dp) || recur(idx1-1,idx2,s1,s2,dp)){
            //no ele deleted || one ele deleted(further more can be deleted->keep idx2 at its pos)
                return dp[idx1][idx2]=true;
    		}
        }
    	return dp[idx1][idx2]=false;
    }
    bool isMatch(string s, string p) {
        int n1=s.size(),n2=p.size();
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,-1));
        return recur(n1,n2,s,p,dp);
    }
};