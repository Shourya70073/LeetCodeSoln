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
private:
    int i;
public:
    Solution(){
        i=0;
    }
    void findy(TreeNode *r,int &i,int &ans,int k){
        if(r==nullptr){
            
            return;
        }
        findy(r->left,i,ans,k);
        i++;
            if(i==k){
                ans=r->val;
                return;
            }
      findy(r->right,i,ans,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans=-1;
        int lvl=0;
        findy(root,lvl,ans,k);
        return ans;
    }
};