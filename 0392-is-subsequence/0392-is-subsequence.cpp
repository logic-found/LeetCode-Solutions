class Solution {
public:
    bool isSubsequence(string s1, string s2) {
        int n1=s1.size(),n2=s2.size();
        int i=0,j=0;
        
        while(i<n1 && j<n2){
            if(s1[i]==s2[j]){
                ++i;++j;
            }
            else ++j;
        }
        return i==n1;
        
    }
};