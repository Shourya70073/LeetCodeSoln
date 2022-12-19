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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int> > >map;
       queue<pair<TreeNode *,pair<int,int>>>qt;
       vector<vector<int>>ans;
       if(root==NULL){
           return ans;
       }
       qt.push(make_pair(root,make_pair(0,0)));
       
       
       while(!qt.empty()){
           int s=qt.size();
           for(int i=0;i<s;i++){
        pair<TreeNode *,pair<int,int>>temp=qt.front();
           qt.pop();
           TreeNode *r=temp.first;
           int hd=temp.second.first;
           int lvl=temp.second.second;
           map[hd][lvl].insert(r->val);
           if(r->left){
               qt.push({r->left,{hd-1,lvl+1}});
           }
           if(r->right){
               qt.push({r->right,{hd+1,lvl+1}});
           }
           }
           
       }
       
       for(auto i:map){
           vector<int>col;
               for(auto j:i.second){
                   col.insert(col.end(),j.second.begin(),j.second.end());
               }
               ans.push_back(col);
           }
       
       return ans;
    }
};