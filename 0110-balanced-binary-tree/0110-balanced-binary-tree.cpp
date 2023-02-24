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
    pair<int,int> check(TreeNode *root){
        if(root==nullptr){
           pair<int,int>temp={1,0};
            return temp;
        }
        
        pair<int,int>p1=check(root->left);
        pair<int,int>p2=check(root->right);
        pair<int,int>ans;
        if(p1.first && p2.first){
            if(abs(p1.second-p2.second)<=1)
            {
                pair<int,int>ans;
                ans.first=1;
                ans.second=1+max(p1.second,p2.second);
                return ans;
            }
            else{
                pair<int,int>ans;
                ans.first=0;
                ans.second=1+max(p1.second,p2.second);
                return ans;
            }
        }
        else{
          pair<int,int>ans;
                ans.first=0;
                ans.second=1+max(p1.second,p2.second);
                return ans;
        }
    }
    bool isBalanced(TreeNode* root) {
        pair<int,int>p1=check(root);
        return p1.first;
    }
};