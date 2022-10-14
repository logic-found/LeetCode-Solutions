/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool recur(TreeNode* root,TreeNode* subroot){
        if(!root && !subroot) return true;
        else if(!root || !subroot) return false;
        else if(root->val!=subroot->val) return false;
    
        bool a=recur(root->left,subroot->left);
        bool b=recur(root->right,subroot->right);
        return a && b;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;
        //cout<<root->val<<endl;
        if(root->val==subRoot->val && recur(root,subRoot)) return true;
        
        bool a=isSubtree(root->left,subRoot);
        bool b=isSubtree(root->right,subRoot);
        
        return a||b;
        }

};