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
        stack<TreeNode *>st;
        st.push(root);
        vector<int>ans;
        while(!st.empty()){
            TreeNode *temp=st.top();
            st.pop();
            int d=temp->val;
            ans.push_back(d);
            if(temp->right!=nullptr){
                st.push(temp->right);
            }
            if(temp->left!=nullptr){
                st.push(temp->left);
            }
        }
        return ans;
        
    }
};