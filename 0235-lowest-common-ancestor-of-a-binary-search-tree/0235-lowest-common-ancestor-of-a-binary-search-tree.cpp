/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* n1, TreeNode* n2) {
        if(root==nullptr){
       return nullptr;
   }
   int curr=root->val;
   if(n1->val>curr && n2->val>curr){
       return lowestCommonAncestor(root->right,n1,n2);
   }
   if(n1->val<curr && n2->val<curr){
       return lowestCommonAncestor(root->left,n1,n2);
   }
   return root;
    }
};