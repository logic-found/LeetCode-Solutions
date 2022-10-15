class Solution {
public:
    int nthUglyNumber(int n) {
        if(n<=6) return n;
        vector<int> dp(n);
        dp[0]=1;
        int p1=0,p2=0,p3=0;
        
        for(int i=1;i<n;++i){
            int two=2*dp[p1];
            int three=3*dp[p2];
            int five=5*dp[p3];
            
            dp[i]=min(two,min(three,five));
            if(dp[i]==two) p1++;
            if(dp[i]==three) p2++;
            if(dp[i]==five) p3++;
        }
        //for(auto i:dp) cout<<i<<" ";
        return dp[n-1];
    }
};