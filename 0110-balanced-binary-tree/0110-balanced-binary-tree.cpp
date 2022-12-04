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
    int maxDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int l=maxDepth(root->left);
        int r=maxDepth(root->right);
        return 1+max(l,r);
    }
    
    bool isBalanced(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        bool e,f;
     
            e=isBalanced(root->left);
            f=isBalanced(root->right);
        
        if(e && f){
            int d=maxDepth(root->left);
            int e=maxDepth(root->right);
            if(abs(d-e)<=1){
                return true;
            }
            else{
           return false;
            }
        }
        else{
            return false;
        }
    }
};