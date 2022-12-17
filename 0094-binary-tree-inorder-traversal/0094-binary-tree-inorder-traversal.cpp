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
           vector<int>t;
            return t;
        }
        vector<int>fans;
        vector<int>ans1=inorderTraversal(root->left);
        int d=root->val;
        vector<int>ans2=inorderTraversal(root->right);
        for(auto i:ans1){
            fans.push_back(i);
        }
        fans.push_back(d);
        for(auto i:ans2){
       fans.push_back(i);
        }
        
        return fans;
    }
};