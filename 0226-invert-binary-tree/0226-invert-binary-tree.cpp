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
    void invert(TreeNode *r1){
        if(r1==nullptr){
            return;
        }
        invert(r1->left);
        invert(r1->right);
        TreeNode *r=r1->left;
        r1->left=r1->right;
        r1->right=r;
    }
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
};