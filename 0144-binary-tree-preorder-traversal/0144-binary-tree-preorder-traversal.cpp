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
           vector<int>ans;
            return ans;
        }
         stack<TreeNode *>st;
        vector<int>ans;
        st.push(root);
        
        while(st.size()>=1){
            TreeNode *temp=st.top();
            ans.push_back(temp->val);
            st.pop();
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
