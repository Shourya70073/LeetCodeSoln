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
    int findsum(TreeNode *root,int &t){
        if(root==nullptr){
            return 0;
        }
        
        int l=findsum(root->left,t);
        int r=findsum(root->right,t);
        t+=abs(l-r);
        return l+r+root->val;
    }
    int findTilt(TreeNode* root) {
        int tilt=0;
         findsum(root,tilt);
        return tilt;
    }
};