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
    void leafy(TreeNode * root,vector<int>&ans){
        if(root==nullptr){
            return;
        }
        if(root->left==nullptr && root->right==nullptr){
            int d=root->val;
            ans.push_back(d);
        }
        leafy(root->left,ans);
        leafy(root->right,ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      vector<int>ans1,ans2;
        leafy(root1,ans1);
        leafy(root2,ans2);
        
     if(ans1==ans2){
         return true;
     }
    else{
            return false;
        }
    }
};