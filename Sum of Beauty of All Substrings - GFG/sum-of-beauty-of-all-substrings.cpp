//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beautySum(string s) {
        // Your code goes here
        int n=s.size(),ans=0;
        
        for(int i=0;i<n;++i){
            vector<int> temp(26,0);
            for(int j=i;j<n;++j){
                temp[s[j]-'a']++;
                int maxi=temp[s[j]-'a'],mini=temp[s[j]-'a'];
                
                for(int k=0;k<26;++k){
                    maxi=max(temp[k],maxi);
                    if(temp[k]>0) mini=min(mini,temp[k]);
                }
                ans+=(maxi-mini);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends