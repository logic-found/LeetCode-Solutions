class Solution {
public:
    // same as memoiation
    int numDecodings(string s) {
        int n=s.size();
        if(n==1){
            if(s[0]!='0') return 1;
            else return 0;
        }
        vector<int> dp(n);
        
        for(int i=n-1;i>=0;--i){
            if(s[i]>'0'){
                dp[i]=(i+1<n)? dp[i+1]:1;
                if(i+1<n && (s[i]=='1' || (s[i]<='2' && s[i+1]<='6')))
                     // if s[i]==1 then s[i-1]=from 0 to 9 || (s[i]=2 and s[i-1]=from 0 to 6)
                    dp[i]+=(i+2<n)? dp[i+2]:1;
            }
        }
        return dp[0];
    }
};