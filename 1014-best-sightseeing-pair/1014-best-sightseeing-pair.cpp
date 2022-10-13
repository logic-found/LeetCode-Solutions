class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n=values.size();
        int prev=values[0],ans=0;
        
        // prev=nums[i]+i   curr=nums[j]-j
        for(int j=1;j<n;++j){
            int curr=values[j]-j;
            ans=max(ans,prev+curr);
            if(values[j]+j>prev) prev=values[j]+j;
        }
        return ans;
    }
};