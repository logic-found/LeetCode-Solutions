class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size(),i=0;
        int len=0;
        
        while(i<n){
            int c=0;
            while(i<n && s[i]!=' '){
                ++i;
                ++c;
            }
            if(c) len=c;
            while(i<n && s[i]==' ')++i;
        }
        return len;
    }
};