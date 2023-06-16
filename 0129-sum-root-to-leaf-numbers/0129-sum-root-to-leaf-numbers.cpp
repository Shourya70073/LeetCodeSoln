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
    void sumyy(TreeNode *root, int sumy, vector<int>&ans){
        if(!root){
           
            return;
        }
        
        
        if(root->left==nullptr && root->right==nullptr){
             sumy=sumy*10 +root->val;
            ans.push_back(sumy);
            return;
        }
        sumy=sumy*10 +root->val;
        sumyy(root->left,sumy,ans);
        sumyy(root->right,sumy,ans);
    }
    int sumNumbers(TreeNode* root) {
        vector<int>num;
        sumyy(root,0,num);
        int ans=0;
        for(auto i:num){
            ans=ans+i;
        }
        return ans;
    }
};