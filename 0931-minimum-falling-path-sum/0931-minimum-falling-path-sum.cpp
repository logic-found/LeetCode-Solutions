class Solution {
public:
    // space optimized
    int minFallingPathSum(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size(),ans=INT_MAX;
        vector<int> prev(n);
        for(int j=0;j<n;++j){
            prev[j]=mat[m-1][j];    //initialization
        }
        
        for(int i=m-2;i>=0;--i){
            vector<int> temp(n);
            for(int j=0;j<n;++j){
                int x=(j-1>=0)? prev[j-1]:100000;
                int y=(j+1<n)? prev[j+1]:100000;
                temp[j]=mat[i][j]+min(prev[j],min(x,y));
            } 
            prev=temp;
        }
        for(int j=0;j<n;++j){
            ans=min(ans,prev[j]);
        }
        
        return ans;
    }
};