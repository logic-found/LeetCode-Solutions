class Solution {
public:
    struct Node{
        Node* links[26];
        bool flag=false;
        
        bool containsKey(char ch){
            return (links[ch-'a']!=NULL);
        }
        Node* get(char ch){
            return links[ch-'a'];
        }
        void put(char ch,Node* newnode){
            links[ch-'a']=newnode;
        }
    };
    Node* root=new Node();
    string replaceWords(vector<string>& dict, string sen) {
        
        for(auto i:dict){
            Node* node=root;
            for(auto j:i){
                if(node->containsKey(j)==false){
                    node->put(j,new Node());
                }
                node=node->get(j);
            }
            node->flag=true;
        }
        
        string ans="";
        int n=sen.size(),i=0;
        
        while(i<n){
            string temp="";
            int size=0;
            while(i<n && sen[i]!=' '){
                temp+=sen[i++];               // word to be searched
                ++size;
            }
        
            Node* node=root;
            int index=0;
            string str="";
            for(int j=0;j<size;++j){
                if(node->containsKey(temp[j])==false || node->flag){
                    index=j;
                    break;
                }
                node=node->get(temp[j]);
                str+=temp[j];
            }
            if(index!=0 && index<size && node->flag){
                ans+=str;
            } 
            else ans+=temp;
            ans+=' ';
            ++i;
        }
        ans.pop_back();
        return ans;
    }
};