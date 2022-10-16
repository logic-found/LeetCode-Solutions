class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0,right=0,ans=0;
        vector<int> ngr(n),ngl(n);
        
        for(int i=0;i<n;++i){
            
            if(right>height[n-i-1]) ngr[n-i-1]=right;
            else ngr[n-i-1]=0;
            
            if(left>height[i]) ngl[i]=left;
            else ngl[i]=0;
            
            left=max(left,height[i]);
            right=max(right,height[n-i-1]);
        }
        
        for(int i=0;i<n;++i){
            if(ngl[i]>height[i] && ngr[i]>height[i]){
                ans+=min(ngl[i],ngr[i])-height[i];
            }
        }
        return ans;
    }
};