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
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==nullptr){
            vector<int>t;
            return t;
        }
        int d=root->val;
        vector<int>ans;
        ans.push_back(d);
        vector<int>ans1=preorderTraversal(root->left);
        vector<int>ans2=preorderTraversal(root->right);
        for(auto i:ans1){
            ans.push_back(i);
        }
        for(auto i:ans2){
            ans.push_back(i);
        }
        return ans;
    }
};