class Trie {
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
    Node* root;
    Trie() {
        root=new Node();
    }
    
    void insert(string word) {
        Node* node=root;
        int n=word.size();
        for(int i=0;i<n;++i){
            if(node->containsKey(word[i])==0){     // does not exist
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);               // move to reference
        }
        node->flag=true;                           // set last trie as true(indicates the end)
    }
    
    bool search(string word) {
        Node* node=root;
        int n=word.size();
        for(int i=0;i<n;++i){
            if(node->containsKey(word[i])==0){
                return false;
            }
            node=node->get(word[i]);
        }
        if(node->flag) return true;              // it is the last trie then word exist else NOT
        return false;
    }
    
    bool startsWith(string prefix) {
        Node* node=root;
        int n=prefix.size();
        
        for(int i=0;i<n;++i){
            if(node->containsKey(prefix[i])==0)
                return false;
            node=node->get(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */