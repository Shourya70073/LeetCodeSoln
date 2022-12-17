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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr){
            vector<vector<int>>t;
            return t;
        }
        vector<vector<int>>fans;
        queue<TreeNode*>qt;
        qt.push(root);
        
        while(!qt.empty()){
            vector<int>ans;
            int size=qt.size();
            for(int i=0;i<size;i++){
                TreeNode *temp=qt.front();
                int d=temp->val;
                ans.push_back(d);
                qt.pop();
                if(temp->left!=nullptr){
                    qt.push(temp->left);
                }
                if(temp->right!=nullptr){
                    qt.push(temp->right);
                }
            }
            fans.push_back(ans);
        }
        return fans;
        
    }
};