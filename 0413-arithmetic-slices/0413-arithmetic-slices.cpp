class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
       int n=nums.size(),ans=0;
        if(n<=2) return ans;
        vector<int> dp(n);
        dp[0]=dp[1]=0;
        
        for(int i=2;i<n;++i){
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
                dp[i]=1+dp[i-1];
            }
            ans+=dp[i];
        }
        return ans;
    }
};