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
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==nullptr){
            vector<string>t;
            return t;
        }
        if(root->left==nullptr && root->right==nullptr){
            vector<string>ans;
            ans.push_back(to_string(root->val));
            return ans;
        }
        vector<string>ans1=binaryTreePaths(root->left);
        vector<string>ans2=binaryTreePaths(root->right);
        vector<string>fans;
        for(auto i:ans1){
            fans.push_back(to_string(root->val)+"->"+i);
        }
        for(auto i:ans2){
            fans.push_back(to_string(root->val)+"->"+i);
        }
        return fans;
    }
};