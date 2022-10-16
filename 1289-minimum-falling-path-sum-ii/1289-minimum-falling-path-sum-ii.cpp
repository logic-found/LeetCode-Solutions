class Solution {
public:
    //space optimised
    int minFallingPathSum(vector<vector<int>>& mat) {
        int m=mat.size(),n=m;
        vector<int> dp(n+1,0);
        
        for(int i=m-1;i>=0;--i){
            vector<int> auxi(n+1);
            for(int prev=0;prev<=n;++prev){  
                int temp=INT_MAX;
                
                for(int j=0;j<n;++j){
                    if(prev==j) continue;
                    temp=min(temp,mat[i][j]+dp[j]);
                }
                auxi[prev]=temp;
            }
            dp=auxi;
        }
        return dp[n];    // storing th min of each row at nth column
    }
};