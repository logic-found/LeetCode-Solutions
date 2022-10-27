class Solution {
public:
    struct Node{
        Node* links[26];
        bool flag=false;
        
        bool containsKey(char ch){
            return (links[ch-'a']!=NULL);
        }
        void put(char ch,Node* newnode){
            links[ch-'a']=newnode;
        }
        Node* get(char ch){
            return links[ch-'a'];
        }
    };
    Node* root=new Node();
    
    string longestWord(vector<string>& words) {
        int n=words.size();
        
        for(int i=0;i<n;++i){
            Node* node=root;
            for(int j=0;j<words[i].size();++j){
                if(node->containsKey(words[i][j])==0){    
                    node->put(words[i][j],new Node());
                }
                node=node->get(words[i][j]);              
            }
            node->flag=true; 
        }
    
        string ans="";
        for(int i=0;i<n;++i){
             bool temp=true;
             Node* node=root;
             for(int j=0;j<words[i].size() && temp;++j){
                 node=node->get(words[i][j]);
                 if(node->flag==false)
                     temp=false;
             }
    
             if(temp){
                 if(ans.size()<words[i].size()) ans=words[i];
                 else if(ans.size()==words[i].size() && ans>words[i]) ans=words[i];
             }  
         }
        return ans;
    }
};