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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>qt;
        qt.push(root);
        int cnt=0;
        while(!qt.empty()){
            int s=qt.size();
        
            int prev=0;
            for(int i=0;i<s;i++){
                
                TreeNode *temp=qt.front();
                int b=temp->val;
                
                
                if(cnt%2==0){
                    if(b%2==0){
                        return false;
                    }
                    
                    if(b<=prev && i>0){
                        return false;
                    }
                }
                else{
                    if(b%2!=0){
                        return false;
                    }
                   
                    if(b>=prev && i>0){
                        return false;
                    }
                }
                
                
                if(temp->left)
                    qt.push(temp->left);
                if(temp->right)
                    qt.push(temp->right);
                
                
                prev=b;
                qt.pop();
            }
            
            cnt++;
        }
        return true;
    }
};