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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>fans;
        queue<TreeNode*>qt;
        qt.push(root);
        
        while(!qt.empty()){
            int s=qt.size();
            double sum=0;
            
            for(int i=0;i<s;i++){
             TreeNode *temp=qt.front();
             int d=temp->val;
             sum=sum+d;
             if(temp->left){
                 qt.push(temp->left);
             }
             if(temp->right){
                 qt.push(temp->right);
             }
                qt.pop();
            }
            double avg=sum/s;
            fans.push_back(avg);
            
            
        }
        
        return fans;
    }
};