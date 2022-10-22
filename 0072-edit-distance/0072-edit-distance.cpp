class Solution {
public:
    // 1 based index
    int recur(int i,int j,string& s1,string& s2,vector<vector<int>>& dp){

        if(j==0) return i;    // delete all left over
        if(i==0) return j;    // insert all left over
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s1[i-1]==s2[j-1]){
            return dp[i][j]=recur(i-1,j-1,s1,s2,dp);
        }
        else{
            int temp=1+recur(i-1,j-1,s1,s2,dp);       // replace
            temp=min(temp,1+recur(i-1,j,s1,s2,dp));    //delete
            temp=min(temp,1+recur(i,j-1,s1,s2,dp));    //insert
            return dp[i][j]=temp;
        }

    }
    int minDistance(string s1, string s2) {
        int n1=s1.size(),n2=s2.size();
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,-1));
       return recur(n1,n2,s1,s2,dp);
    }
};