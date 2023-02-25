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
    vector<int> largestValues(TreeNode* root) {
        
        vector<int>ans;
        if(root==nullptr){
            return ans;
        }
        
        queue<TreeNode*>qt;
        qt.push(root);
        
        while(!qt.empty()){
            int s=qt.size();
            int max=INT_MIN;
            for(int i=0;i<s;i++){
                TreeNode *temp=qt.front();
                int v=temp->val;
                if(v>=max){
                    max=v;
                    
                }
               
                if(temp->left)
                    qt.push(temp->left);
                if(temp->right)
                    qt.push(temp->right);
                qt.pop();
            }
            ans.push_back(max);
        }
        return ans;
    }
};