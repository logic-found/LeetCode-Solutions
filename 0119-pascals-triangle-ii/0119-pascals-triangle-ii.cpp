class Solution {
public:
    // space optimised
    vector<int> getRow(int n) {
        n++;  
        vector<int> prev;
        
        for(int i=0;i<n;++i){
            vector<int> temp(i+1);
            temp[0]=temp[i]=1;
            for(int j=1;j<i;++j){
                temp[j]=prev[j]+prev[j-1];
            }
            prev=temp;
        }
        return prev;
    }
};