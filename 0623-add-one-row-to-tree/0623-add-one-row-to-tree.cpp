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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        queue<TreeNode*>qt;
        qt.push(root);
        int d=1;
        if(depth==1){
              TreeNode *n1=new TreeNode(val,nullptr,nullptr);
                 n1->left=root;
            return n1;
        }
        while(!qt.empty()){
         
         int s=qt.size();
         for(int i=0;i<s;i++){
             TreeNode *temp=qt.front();
             if(d==depth-1){
                 TreeNode *n1=new TreeNode(val,nullptr,nullptr);
                 TreeNode *n2=new TreeNode(val,nullptr,nullptr);
                 n1->left=temp->left;
                 temp->left=n1;
                 n2->right=temp->right;
                 temp->right=n2;
                 
                
                 
             }
             if(temp->left){
                 qt.push(temp->left);
             }
             if(temp->right)
                 qt.push(temp->right);
             qt.pop();
         }
            d++;
         }
        return root;
    }
};