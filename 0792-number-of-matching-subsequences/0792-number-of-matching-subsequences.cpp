class Solution {
public:
    struct Node{
        Node* links[26];
        bool flag=false;
        
        Node* get(char ch){
            return links[ch-'a'];
        }
        bool containsKey(char ch){
            return (links[ch-'a']!=NULL);
        }
        void put(char ch,Node* newnode){
            links[ch-'a']=newnode;
        }
        Node* getNextKey(){
            for(int i=0;i<26;++i){
                if(links[i]!=NULL) return links[i];
            }
            return NULL;
        }
    };
    Node* root=new Node();
    
    int numMatchingSubseq(string s, vector<string>& words) {
        int n=s.size();
        Node* node=root;
        for(int i=0;i<n;++i){
            if(node->containsKey(s[i])==false){
                node->put(s[i],new Node());
            }
            node=node->get(s[i]);
        }
        node->flag=true;
        
        int size=words.size(),ans=0;
        unordered_map<string,int> mp;
        
        for(int i=0;i<size;++i){
            int len=words[i].size(),j=0;
            Node* node=root;
            
            if(mp.find(words[i])==mp.end()){      // if word does not exist in map
                while(j<len && node && node->flag!=true){ 
                    if(node->containsKey(words[i][j])==false){
                        node=node->getNextKey();
                    }
                    else{
                        node=node->get(words[i][j]);
                        ++j;
                    }
                }
            }
            if(j==len || mp[words[i]]==1){     
                ++ans;
                mp[words[i]]=1;
            }
            else{
                mp[words[i]]=0;
            }
        }
        return ans;
    }
};