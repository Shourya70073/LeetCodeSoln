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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==nullptr){
            vector<vector<int>>temp;
            return temp;
        }
     stack<vector<int>>st;
        vector<vector<int>>ans;
        queue<TreeNode*>qt;
        qt.push(root);
        while(!qt.empty()){
            int s=qt.size();
            vector<int>a;
            for(int i=0;i<s;i++){
          TreeNode *temp=qt.front();
         a.push_back(temp->val);
        if(temp->left)
            qt.push(temp->left);
        if(temp->right)
            qt.push(temp->right);
                
        qt.pop();
         
            }
            st.push(a);
        }
        while(!st.empty()){
            vector<int>temp=st.top();
            ans.push_back(temp);
            st.pop();
        }
        return ans;
    }
};