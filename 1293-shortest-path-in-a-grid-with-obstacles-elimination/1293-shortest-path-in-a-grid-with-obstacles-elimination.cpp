class Solution {
public:
    int shortestPath(vector<vector<int>>& mat, int obstacle) {
        int m=mat.size(),n=mat[0].size();
        if(m==1 && n==1) return 0;
        
        queue<vector<int>> q;
        q.push({0,0,obstacle,0});  // row=0,col=0,obs=0,dis=0
        vector<vector<int>> dp(m,vector<int>(n,-1)); // store no of obstacles 
        vector<pair<int,int>> v={{1,0},{0,1},{0,-1},{-1,0}};
        
        while(!q.empty()){
            auto k=q.front();
            q.pop();
            int row=k[0],col=k[1],obs=k[2],dis=k[3];
            if(row==m-1 && col==n-1) return dis;
            
            if(mat[row][col]==1) --obs;
            
            for(auto [x,y]:v){
                int i=row+x,j=col+y;
                if(i>=0 && i<m && j>=0 && j<n && obs>dp[i][j]){
                    dp[i][j]=obs;
                    q.push({i,j,obs,dis+1});
                }
            }
        }
        
        return -1;
    }
};