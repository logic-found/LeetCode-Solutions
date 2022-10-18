class Solution {
public:
    // first no of occurences then that character
    string countAndSay(int n) {
        int size=1,k=1;
        string s="1";
        
        while(k<n){
            int i=0;
            string temp="";
            while(i<size){
                char ch=s[i];
                int c=0;
                while(i<size && s[i]==ch){
                    ++i;
                    ++c;
                }
                string x=to_string(c);
                temp+=x;
                temp+=ch;
            }
            s=temp;
            size=s.size();

            k++;
        }
    
        return s;
    }
};