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
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int ans1=diameterOfBinaryTree(root->left);
        int ans2=diameterOfBinaryTree(root->right);
        int l=maxDepth(root->left);
        int d=maxDepth(root->right);
        int s=l+d;
        return max(s,max(ans1,ans2));
        
    }
};