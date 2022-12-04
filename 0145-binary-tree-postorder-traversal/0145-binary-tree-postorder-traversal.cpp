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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==nullptr){
            vector<int>t;
            return t;
        }
        vector<int>t;
        int d=root->val;
        vector<int>t1=postorderTraversal(root->left);
        vector<int>t2=postorderTraversal(root->right);
        for(auto i:t1){
            t.push_back(i);
        }
        for(auto i:t2){
            t.push_back(i);
        }
        t.push_back(d);
        return t;
        
    }
};