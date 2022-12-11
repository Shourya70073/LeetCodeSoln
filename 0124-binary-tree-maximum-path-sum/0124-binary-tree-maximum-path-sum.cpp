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
    int subTreesum(TreeNode* root,int& mx)
    {
        if(root==NULL) return 0;

     
        int l = max(0,subTreesum(root->left,mx));
        int r = max(0,subTreesum(root->right,mx));

        int curr = root->val+l+r;                             
        cout<<curr<<" ";

        mx = max(mx,curr);                                    

        return root->val+max(l,r);                            
    }
    int maxPathSum(TreeNode* root) 
    {
        int mx = INT_MIN;
        subTreesum(root,mx);
        return mx;
    }
};