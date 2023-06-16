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
    void gettheWorkDone(TreeNode *root, int targetSum,int sum, vector<vector<int>> &ans, vector<int>help){
        if(!root){
            
            return;
        }
        
        if(root->left==nullptr && root->right==nullptr){
            sum=sum+root->val;
            help.push_back(root->val);
            if(sum==targetSum){
                ans.push_back(help);
            }
        }
        sum=sum+root->val;
        help.push_back(root->val);
        gettheWorkDone(root->left,targetSum,sum,ans,help);
                gettheWorkDone(root->right,targetSum,sum,ans,help);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>help;
        gettheWorkDone(root,targetSum,0,ans,help);
        return ans;
    }
};