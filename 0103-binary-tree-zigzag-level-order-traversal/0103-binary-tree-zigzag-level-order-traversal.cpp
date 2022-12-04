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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==nullptr){
            vector<vector<int>>t;
            return t;
        }
        vector<vector<int>>ans;
        queue<TreeNode *>qt;
        int flag=0;
        qt.push(root);
        while(!qt.empty()){
            
            vector<int>t;
            int s=qt.size();
            for(int i=0;i<s;i++){
                TreeNode *temp=qt.front();
               
                if(temp->left!=nullptr){
                    qt.push(temp->left);
                }
                if(temp->right!=nullptr){
                    qt.push(temp->right);
                }
                t.push_back(temp->val);
                 qt.pop();
            }
            if(flag%2!=0){
                reverse(t.begin(),t.end());
            }
            ans.push_back(t);
            flag++;
             }
        return ans;
    }
};