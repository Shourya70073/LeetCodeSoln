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
    TreeNode *ans;
    void findans(TreeNode *root,int val){
        
        if(root==nullptr){
         return;
        }
        if(root->val==val){
            ans=root;
            return;
        }
        findans(root->left,val);
        findans(root->right,val);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
      findans(cloned,target->val);
        return ans;
    }
};