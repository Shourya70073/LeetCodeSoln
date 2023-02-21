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
            vector<int>temp;
            return temp;
        }
        
        int d=root->val;
        vector<int>ans1=preorderTraversal(root->left);
        vector<int>ans2=preorderTraversal(root->right);
        vector<int>fans;
        fans.push_back(d);
        for(auto i:ans1){
            fans.push_back(i);
        }
        for(auto i:ans2){
            fans.push_back(i);
        }
        return fans;
    }
};