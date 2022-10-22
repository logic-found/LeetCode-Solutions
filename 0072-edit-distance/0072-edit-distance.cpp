class Solution {
public:
    int recur(int i,int j,string& s1,string& s2,vector<vector<int>>& dp){
        if(j<0 && i>=0) return i+1;
        if(i<0 && j>=0) return j+1;
        if(j<0 || i<0) return 0;
        //cout<<s1[i]<<" "<<s2[j]<<endl;
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s1[i]==s2[j]){
            return dp[i][j]=recur(i-1,j-1,s1,s2,dp);
        }
        else{
            int temp=500;
            temp=min(temp,1+recur(i-1,j-1,s1,s2,dp));  // replace
            temp=min(temp,1+recur(i-1,j,s1,s2,dp));    //delete
            temp=min(temp,1+recur(i,j-1,s1,s2,dp));    //insert
            return dp[i][j]=temp;
        }

    }
    int minDistance(string s1, string s2) {
        int n1=s1.size(),n2=s2.size();
        if(n1==0) return n2;
        else if(n2==0) return n1;
        vector<vector<int>> dp(n1,vector<int>(n2,-1));
        return recur(n1-1,n2-1,s1,s2,dp);
    }
};