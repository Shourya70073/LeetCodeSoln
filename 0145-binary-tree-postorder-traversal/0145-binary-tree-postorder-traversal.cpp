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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==nullptr){
         vector<int>ans;
            return ans;
        }
        stack<TreeNode*>st;
         stack<TreeNode *>st1;
        vector<int>ans;
        st.push(root);
        
        while(st.size()>=1){
            TreeNode *temp=st.top();
            st1.push(temp);
            st.pop();
            
            
            
            if(temp->left!=nullptr){
                st.push(temp->left);
                
            }
            if(temp->right!=nullptr){
                st.push(temp->right);
                
            }
            
        }
        while(st1.size()>0){
            TreeNode *temp=st1.top();
            st1.pop();
            
            ans.push_back(temp->val);
        }
        return ans;
    }
};