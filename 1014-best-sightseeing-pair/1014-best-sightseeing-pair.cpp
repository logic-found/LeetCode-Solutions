class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n=values.size();
        int prev=values[0],ans=0;
        
        for(int j=1;j<n;++j){
            int x=values[j]-j;
            ans=max(ans,prev+x);
            if(values[j]+j>prev) prev=values[j]+j;
        }
        return ans;
    }
};