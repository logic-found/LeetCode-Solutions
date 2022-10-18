class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        long long int ans=0;
        unordered_map<long long int,unordered_map<long long int,long long int>> mp;
        
        for(int i=1;i<n;++i){
            for(int j=0;j<i;++j){
                long long int x=mp[j][(long)nums[i]-nums[j]];
                ans+=x;
                mp[i][(long)nums[i]-nums[j]]+=(x+1);
            }
        }
        return ans;
    }
};