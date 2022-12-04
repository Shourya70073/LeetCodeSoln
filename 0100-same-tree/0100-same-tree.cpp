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
                        t.push_back(-9999);
            return t;
        }
        vector<int>t1;
        int d=root->val;
        
        vector<int>t2=preorderTraversal(root->left);
        vector<int>t3=preorderTraversal(root->right);
        t1.push_back(d);
        
        for(auto i:t2){
              t1.push_back(i);
        }
        
        for(auto i:t3){
            t1.push_back(i);
        }
        return t1;
        
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>t1=preorderTraversal(p);
        vector<int>t2=preorderTraversal(q);
        return (t1==t2);
    }
};