class Solution {
public:
    TreeNode* construct(int prestart,int preend, vector<int> &preorder, int instart, int inend, vector<int> &inorder, map<int,int> &mp){
        if(prestart>preend || instart>inend) return NULL;
        TreeNode* root=new TreeNode(preorder[prestart]);
        int root_idx=mp[root->val];
        int nelements=root_idx-instart;
        root->left=construct(prestart+1,prestart+nelements,preorder,instart,root_idx-1,inorder,mp);
        root->right=construct(prestart+nelements+1,preend,preorder,root_idx+1,inend,inorder,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mp;
        for(int i=0;i<inorder.size();i++) mp[inorder[i]]=i;
        TreeNode* root= construct(0,preorder.size()-1,preorder,0,inorder.size()-1,inorder,mp);
        return root;
    }
};