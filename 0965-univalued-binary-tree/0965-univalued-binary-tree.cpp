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
    bool isUnivalTree(TreeNode* root) {
        queue<TreeNode *>qt;
        int p=root->val;
        qt.push(root);
        
        while(!qt.empty()){
           int s=qt.size();
           
           for(int i=0;i<s;i++) {
                TreeNode *temp=qt.front();
                if(p!=temp->val)
                    return false;
                if(temp->left)
                    qt.push(temp->left);
               if(temp->right)
                   qt.push(temp->right);
               
               qt.pop();
           }
        }
        
        return true;
    }
};