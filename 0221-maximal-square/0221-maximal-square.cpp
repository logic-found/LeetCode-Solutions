class Solution {
public:
    //space optimised
    int maximalSquare(vector<vector<char>>& mat) {
        int m=mat.size(),n=mat[0].size(),area=0;
        vector<int> dp(n);
    
        for(int i=0;i<m;++i){
            vector<int> temp(n);
            for(int j=0;j<n;++j){
                if(mat[i][j]=='1'){               // fill 1 area square
                    temp[j]=1;
                    area=max(area,1);
                }
                if(i>=1 && j>=1){
                    if(mat[i][j]=='1' && mat[i-1][j-1]=='1' && mat[i-1][j]=='1' && 
                                                                        mat[i][j-1]=='1'){
                        temp[j]=1+min(dp[j-1],min(dp[j],temp[j-1]));
                        area=max(area,temp[j]*temp[j]);
                    }
                }
                
            }
            dp=temp;
        }
        
        return area;
    }
};