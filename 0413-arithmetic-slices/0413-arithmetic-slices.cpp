class Solution {
public:
    //space optimised
    int numberOfArithmeticSlices(vector<int>& nums) {
       int n=nums.size(),ans=0;
        if(n<=2) return ans;
        vector<int> dp(n);
        int prev=0;
        
        for(int i=2;i<n;++i){
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
                prev=1+prev;
            }
            else prev=0;    // subarray not formed
            ans+=prev;
        }
        return ans;
    }
};