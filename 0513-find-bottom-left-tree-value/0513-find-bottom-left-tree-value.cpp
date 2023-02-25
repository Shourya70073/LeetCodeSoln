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
    int findBottomLeftValue(TreeNode* root) {
        int ans=0;
        if(root==nullptr){
            return ans;
        }
        queue<TreeNode *>qt;
        qt.push(root);
        
        while(!qt.empty()){
            int s=qt.size();
            for(int i=0;i<s;i++){
                TreeNode *temp=qt.front();
                if(i==0)
                    ans=temp->val;
                if(temp->left)
                    qt.push(temp->left);
                if(temp->right)
                    qt.push(temp->right);
                qt.pop();
            }
        }
        
        return ans;
    }
};