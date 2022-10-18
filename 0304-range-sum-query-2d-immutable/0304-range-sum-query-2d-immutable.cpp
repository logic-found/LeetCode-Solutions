class NumMatrix {
public:
    vector<vector<int>> prefix;
    NumMatrix(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        prefix.resize(m,vector<int>(n));
    
        prefix[0][0]=mat[0][0];
        
        for(int i=1,j=1;i<m || j<n;++i, ++j){
            if(i<m) prefix[i][0]=prefix[i-1][0]+mat[i][0];
            if(j<n) prefix[0][j]=prefix[0][j-1]+mat[0][j];
        }
        for(int i=1;i<m;++i){
            for(int j=1;j<n;++j){
                prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+mat[i][j];  
            }
        }

    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        int a=(r1-1>=0)? prefix[r1-1][c2]:0;
        int b=(c1-1>=0)? prefix[r2][c1-1]:0;
        int k=(r1-1>=0 && c1-1>=0)? prefix[r1-1][c1-1]:0;
        
        return prefix[r2][c2]-a-b+k;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */