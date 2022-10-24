class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size(),c=1,i=1;
        while(i<n){
            if(nums[i]>nums[i-1]){
                ++c;
                while(i<n && nums[i]>=nums[i-1]) ++i;}
            else if(nums[i]<nums[i-1]){
                ++c;
                while(i<n && nums[i]<=nums[i-1]) ++i;}
            else ++i;
        }
        return c;}
};