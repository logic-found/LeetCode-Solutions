class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size(),len=0;
        int j=0,i=0;
        
        while(i<n){
            char ch=chars[i];
            int c=0;
            while(i<n && ch==chars[i]){
                ++i;
                ++c;
            }
            len++;
            if(c==1){
                chars[j++]=ch;}
            else{
                chars[j++]=ch;
                string s=to_string(c);
                int size=s.size(),k=0;
                while(j<n && k<size){
                    chars[j++]=s[k++];
                }
                len+=size;
            }
        
        }
        return min(n,len);
    }
};