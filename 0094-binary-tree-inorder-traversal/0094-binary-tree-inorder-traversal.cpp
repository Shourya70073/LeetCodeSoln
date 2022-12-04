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
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==nullptr){
            vector<int>t1;

            return t1;
        }
        vector<int>t2;
        int d=root->val;
        vector<int>t3=inorderTraversal(root->left);
        for(auto i:t3){
            t2.push_back(i);
        }
        t2.push_back(d);
        vector<int>t4=inorderTraversal(root->right);
        for(auto i:t4)
            t2.push_back(i);
        return t2;
        
    }
};