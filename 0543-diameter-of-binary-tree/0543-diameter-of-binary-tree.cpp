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
    pair<int,int> findo(TreeNode *root){
        if(root==nullptr){
          pair<int,int>p={0,0};
          return p;
        }
        
        pair<int,int>p1=findo(root->left);
        pair<int,int>p2=findo(root->right);
        pair<int,int>ans;
        int h=max(p1.first,p2.first)+1;
        int d=max(p1.first+p2.first,max(p1.second,p2.second));
        ans.first=h;
        ans.second=d;
        return ans;
       
    }
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int,int>p1=findo(root);
        return p1.second;
    }
};