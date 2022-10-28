class Solution {
public:
    struct Node{
      Node* links[2];
        
      bool containsKey(int key){
          return (links[key]!=NULL);
      }
        Node* get(int key){
            return links[key];
        }
        void put(int key,Node* newnode){
            links[key]=newnode;
        }
        
    };
    Node* root=new Node();
    int findMaximumXOR(vector<int>& nums) {
       
        for(auto i:nums){
           string s=bitset<32>(i).to_string();
            Node* node=root;
            for(int j=0;j<32;++j){
                int k=(s[j]=='1')? 1:0;
                if(node->containsKey(k)==false){
                   node->put(k,new Node()); 
                }
                node=node->get(k);
            }
        }
            int ans=0;
            for(auto i:nums){
                string s=bitset<32>(i).to_string();
                Node* node=root;
                int temp=0;
                for(int j=0;j<32;++j){
                   int k=(s[j]=='1')? 1:0;
                    if(node->containsKey(1-k)==true){     // check for opposite
                        temp+=pow(2,31-j);
                        node=node->get(1-k);
                    }
                    else node=node->get(k);              // same
                }
                ans=max(ans,temp);
            }
            
            return ans;

    }
};