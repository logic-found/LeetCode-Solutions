class Solution {
public:
        bool recur(int idx1,int idx2,int& n1,int& n2,string& s1,string& s2,vector<vector<int>>& dp){
            if(idx1>=n1 && idx2>=n2) return true;
            else if(idx2>=n2) return false;   //as nothing exist to compare,replace / subsitute
            else if(s2[idx2]!='?' && s2[idx2]!='*' && (s1[idx1]!=s2[idx2])) return false;
            if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];

            if(idx1<n1 && s1[idx1]==s2[idx2]){
                return dp[idx1][idx2]=recur(idx1+1,idx2+1,n1,n2,s1,s2,dp);
            }
            else if(idx1<n1 && s2[idx2]=='?'){
                return dp[idx1][idx2]=recur(idx1+1,idx2+1,n1,n2,s1,s2,dp);    // replace
            }
            else if(s2[idx2]=='*'){
                for(int i=0;idx1+i<=n1;++i){
                    bool a=recur(idx1+i,idx2+1,n1,n2,s1,s2,dp);   //matches sequence of character
                    if(a) return dp[idx1][idx2]=true;
                }
            }
            return dp[idx1][idx2]=false;
        }
    bool isMatch(string s, string p) {
        int n1=s.size(),n2=p.size();
        int size=(n1>n2)? n1:n2;
        vector<vector<int>> dp(size+1,vector<int>(size+1,-1));
        return recur(0,0,n1,n2,s,p,dp);

    }
};