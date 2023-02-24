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
    void findsum(TreeNode *root,int &sum, bool isleft){
        if(root==nullptr){
            return;
        }
        if(isleft==1 && root->left==nullptr && root->right==nullptr){
            sum=sum+root->val;
            return;
        }
        findsum(root->left,sum,1);
        findsum(root->right,sum,0);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int sum=0;
        findsum(root,sum,0);
        return sum;
    }
};