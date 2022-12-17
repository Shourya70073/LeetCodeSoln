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
    int height(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int l=height(root->left);
        int r=height(root->right);
        return 1+max(l,r);
    }
    
    bool isBalanced(TreeNode* root) {
        if(root==nullptr){
            return 1;
        }
        bool b=isBalanced(root->left);
        bool c=isBalanced(root->right);
        if(b&&c){
            int left=height(root->left);
            int right=height(root->right);
            if(abs(left-right)<=1){
                return true;
            }
            return false;
        }
        else{
            return 0;
        }
    }
};