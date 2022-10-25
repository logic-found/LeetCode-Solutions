class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n1=word1.size(),n2=word2.size(),i=0,j=0;
        string s1="",s2="";
        
        while(i<n1 || j<n2){
            if(i<n1) s1+=word1[i++];
            if(j<n2) s2+=word2[j++];
        }
        return s1==s2;
    }
};