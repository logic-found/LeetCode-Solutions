//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    bool recur(int idx1,int idx2,string& s1,string& s2,vector<vector<int>>& dp){
    	if(idx1==0 && idx2==0) return true;
    	else if(idx2==0) return false;
    	else if(s2[idx2-1]!='?' && s2[idx2-1]!='*' && s1[idx1-1]!=s2[idx2-1]) return false;
    	else if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];
    	
    	if(idx1>0 && s1[idx1-1]==s2[idx2-1]){
    		return dp[idx1][idx2]=recur(idx1-1,idx2-1,s1,s2,dp);
    	}
    	else if(idx1>0 && s2[idx2-1]=='?'){
    		return dp[idx1][idx2]=recur(idx1-1,idx2-1,s1,s2,dp);
    	}
    	else if(s2[idx2-1]=='*'){
    		for(int i=0;idx1-i>=0;++i){
    			bool a=recur(idx1-i,idx2-1,s1,s2,dp);
    			if(a) return dp[idx1][idx2]=true;
    		}
    	}
    	return dp[idx1][idx2]=false;
    }
    int wildCard(string pattern,string str)
    {
        int n1=str.size(),n2=pattern.size();
        int size=(n1>n2)? n1:n2;
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,-1));
        // for(int r=0;r<=size;++r){
        //     dp[r][n2]=0;
        // }
        // dp[n1][n2]=1;
        // for(int idx1=n1-1;idx1>=0;--idx1){
        //     for(int idx2=n2-1;idx2>=0;--idx2){
                
        //         if(s1[idx1]==s2[idx2] || s2[idx2]=='?'){
        //             dp[idx1][idx2]=dp[idx1+1][idx2+1];
        //         }
        //         else{
        //             for(int i=0;i+idx1<=n1;++i){
        //                 bool a=dp[idx1+i][idx2+1];
        //                 if(a){
        //                     dp[idx1][idx2]=true;
        //                     break;
        //                 }
        //             }
        //         }
        //     }
        // }
        //  ?*?*?*?*???****?????***z*?*       askfkaaasgasz

        return recur(n1,n2,str,pattern,dp);
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
           string pat,text;
           cin>>pat;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
           cin>>text;
           Solution obj;
           cout<<obj.wildCard(pat,text)<<endl;
   }
}

// } Driver Code Ends